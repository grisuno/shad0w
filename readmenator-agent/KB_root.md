# Subsystem: root

## compile.sh
- Layer: utility
- Language: sh

## shadow.c
- Layer: utility
- Doc: gcc -o shadow shadow.c -luring
- Language: c
- Symbols:
  - `read_file_sigilent` (function, line 12) `int read_file_sigilent(const char *path, char *buffer, size_t bufsize)`
  - `main` (function, line 48) `int main()`
  - `_GNU_SOURCE` (macro, line 2) `#define _GNU_SOURCE`
  - `ENTRIES` (macro, line 10) `#define ENTRIES`
