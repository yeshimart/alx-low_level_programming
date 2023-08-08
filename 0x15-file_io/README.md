# 0x15. C - File I/O
## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 14.04 LTS
- C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` and `-pedantic`
- All files should end with a new line

## Tasks

### 0. Tread lightly, she is near

Write a function that reads a text file and prints it to the `POSIX` standard output.
- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- The `filename` parameter is the name of the file to read
- The `letters` parameter is the number of letters it should read and print
- Returns the actual number of letters it could read and print
- If the file can not be opened or read, return `0`
- If `filename` is `NULL` return `0`
- If `write` fails or does not write the expected amount of bytes, return `0`

**File:** [0-read_textfile.c]

### 1. Under the snow

Create a function that creates a file.
- Prototype: `int create_file(const char *filename, char *text_content);`
- The `filename` parameter is the name of the file to create
-
