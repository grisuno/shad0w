# Symbols

| Symbol | Kind | File:Line | Signature |
|--------|------|-----------|-----------|
| `ENTRIES` | macro | `shadow.c:9` | `#define ENTRIES` |
| `_GNU_SOURCE` | macro | `shadow.c:2` | `#define _GNU_SOURCE` |
| `close` | function | `shadow.c:43` | `close(fd);` |
| `io_uring_cqe_seen` | function | `shadow.c:41` | `io_uring_cqe_seen(&ring, cqe);` |
| `io_uring_prep_read` | function | `shadow.c:28` | `io_uring_prep_read(sqe, fd, buffer, bufsize - 1, 0);` |
| `io_uring_queue_exit` | function | `shadow.c:44` | `io_uring_queue_exit(&ring);` |
| `io_uring_sqe_set_data` | function | `shadow.c:29` | `io_uring_sqe_set_data(sqe, NULL);` |
| `main` | function | `shadow.c:47` | `int main()` |
| `printf` | function | `shadow.c:53` | `printf("[+] Leído %d bytes sin usar read()\n", n);` |
| `read_file_sigilent` | function | `shadow.c:11` | `int read_file_sigilent(const char *path, char *buffer, size_t bufsize)` |
