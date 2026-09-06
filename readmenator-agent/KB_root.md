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
  - `_GNU_SOURCE` (macro, line 2)
  - `ENTRIES` (macro, line 9)
