# 0x12-singly_linked_lists

## Description

This project consists of implementing various functions to work with singly linked lists in the C programming language. The goal is to follow specific requirements and constraints outlined below.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file, at the root of the project folder, is mandatory
- Code should follow the Betty style, checked using betty-style.pl and betty-doc.pl
- Global variables are not allowed
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Functions like printf, puts, calloc, realloc, etc., are forbidden
- The use of `_putchar` is allowed, but no need to push `_putchar.c`, as the file will be provided separately for testing
- The prototypes of all functions and the prototype of `_putchar` should be included in the header file `lists.h`
- Don't forget to push your header file
- All header files should be include guarded

### Singly Linked Lists

#### Tests ✔️

The `Tests` directory is for test purposes.

#### Header File 📁

- `lists.h`: Header file containing definitions and prototypes for all types and functions written for the project.

Type/File | Definition/Prototype
--- | ---
`struct list_s` | `char *str` <br> `unsigned int len` <br> `struct list_s *next`
`typedef list_t` | `struct list_s`

Functions | Prototype
--- | ---
`print_list` | `size_t print_list(const list_t *h);`
`list_len` | `size_t list_len(const list_t *h);`
`add_node` | `list_t *add_node(list_t **head, const char *str);`
`add_node_end` | `list_t *add_node_end(list_t **head, const char *str);`
`free_list` | `void free_list(list_t *head);`

### Tasks 📃

- **0. Print list**
    - File: `0-print_list.c`
    - Description: C function that prints all the elements of a `list_t` list. If `str` is `NULL`, the function prints `[0] (nil)`.

- **1. List length**
    - File: `1-list_len.c`
    - Description: C function that returns the number of elements in a linked `list_t` list.

- **2. Add node**
    - File: `2-add_node.c`
    - Description: C function that adds a new node at the beginning of a `list_t` list. If the function fails, it returns `NULL`; otherwise, it returns the address of the new element.

- **3. Add node at the end**
    - File: `3-add_node_end.c`
    - Description: C function that adds a new node at the end of a linked `list_t` list. If the function fails, it returns `NULL`; otherwise, it returns the address of the new element.

- **4. Free list**
    - File: `4-free_list.c`
    - Description: C function that frees a `list_t` list.

- **5. The Hare and the Tortoise**
    - File: `100-first.c`
    - Description: C function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!" before the `main` function is executed.

- **6. Real programmers can write assembly code in any language**
    - File: `101-hello_holberton.asm`
    - Description: 64-bit assembly program that prints "Hello, Holberton" followed by a new line using only the `printf` function without interrupts.

Feel free to use this README.md file as a template for your project's documentation. Make sure to keep it up-to-date as the project progresses. Good luck with your implementation!
