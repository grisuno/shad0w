# Subsystem: root

## compile.sh
- Layer: utility
- Language: sh

## shadow.c
- Layer: utility
- Doc: gcc -o shadow shadow.c -luring define _GNU_SOURCE include <stdio.h> include <stdlib.h> include <fcntl.h> include <string
- Language: c
- Symbols:
  - `read_file_sigilent` (function, line 11) `int read_file_sigilent(const char *path, char *buffer, size_t bufsize)`
  - `main` (function, line 47) `int main()`
  - `io_uring_prep_read` (function, line 28) `io_uring_prep_read(sqe, fd, buffer, bufsize - 1, 0);`
  - `io_uring_sqe_set_data` (function, line 29) `io_uring_sqe_set_data(sqe, NULL);`
  - `io_uring_cqe_seen` (function, line 41) `io_uring_cqe_seen(&ring, cqe);`
  - `close` (function, line 43) `close(fd);`
  - `io_uring_queue_exit` (function, line 44) `io_uring_queue_exit(&ring);`
  - `printf` (function, line 53) `printf("[+] Leído %d bytes sin usar read()\n", n);`
  - `_GNU_SOURCE` (macro, line 2) `#define _GNU_SOURCE`
  - `ENTRIES` (macro, line 9) `#define ENTRIES`
