# root

*Community 0 | 2 files | cohesion 1.00*

## Definition

This community groups 2 file(s) rooted at `root` with dominant language sh (cohesion 1.00). Central symbols: `ENTRIES`, `_GNU_SOURCE`, `main`, `read_file_sigilent`. Core file: `shadow.c` (4 symbols). Documented purpose: gcc -o shadow shadow.c -luring.

## Files

| File | Language | Layer | Symbols | Doc |
|------|----------|-------|---------|-----|
| `compile.sh` | sh | utility | 0 | no |
| `shadow.c` | c | utility | 4 | yes |

## Key Symbols

- `_GNU_SOURCE` (macro, `shadow.c:2`) `#define _GNU_SOURCE`
- `ENTRIES` (macro, `shadow.c:10`) `#define ENTRIES`
- `read_file_sigilent` (function, `shadow.c:12`) `int read_file_sigilent(const char *path, char *buffer, size_t bufsize)`
- `main` (function, `shadow.c:48`) `int main()`

## Internal vs External Edges

- Internal resolved imports (EXTRACTED): 0
- Cross-boundary resolved imports (EXTRACTED): 0

## Connections

- No cross-community bridges recorded. This community is self-contained.

## Risks

- No scoped security, taint, cycle, or layer risks.

## Open Questions

- Why do 1 file(s) lack file-level docs (e.g. `compile.sh`)? What purpose do they serve?
- What would break if the most connected file in root changed?
- Should root be split, given cohesion 1.00?

## Sources

- `compile.sh`
- `shadow.c`
