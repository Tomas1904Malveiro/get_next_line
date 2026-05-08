*This project has been created as part of the 42 curriculum by tochaves*

# get_next_line

## Description

The `get_next_line` project is part of the 42 curriculum and focuses on low-level file reading and memory management in C.

The goal of the project is to recreate a function capable of reading a file descriptor line by line, returning one line each time the function is called.

The function prototype is:

```c
char *get_next_line(int fd);
```

Each call to `get_next_line()` must:

* Read from the given file descriptor.
* Return the next line including the newline character (`\n`) if present.
* Return `NULL` when there is nothing left to read or if an error occurs.

This project introduces important concepts such as:

* Static variables
* Dynamic memory allocation
* File descriptors
* Buffers
* Reading from files using `read()`
* String manipulation
* Memory management and leak prevention

---


# Instructions

## Compilation

Compile the project with:

```bash
gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
```

You can also define a custom buffer size:

```bash
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c
```

---



Run:

```bash
./a.out
```

---

# Features

* Reads files line by line
* Handles multiple calls correctly
* Supports configurable `BUFFER_SIZE`
* Works with standard input and files
* Preserves unread data using static memory
* Dynamic memory management
* EOF handling

---

# Common Challenges

Some of the main difficulties of this project include:

* Managing memory correctly
* Avoiding memory leaks
* Handling partial reads
* Correctly updating the stash
* Managing newline detection
* Supporting files without trailing newline characters

---

# Resources


* Linux `read()` Manual:
  [https://man7.org/linux/man-pages/man2/read.2.html](https://man7.org/linux/man-pages/man2/read.2.html)

* File Descriptors in C:
  [https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)

* Static Variables in C:
  [https://www.geeksforgeeks.org/static-variables-in-c/](https://www.geeksforgeeks.org/static-variables-in-c/)

* O_RDONLY, O_WRONLY and O_RDWR Flags in C Language
  [https://linuxhint.com/c-language-o_donly-o_wrongly-and-o_rdwr-flags/](https://linuxhint.com/c-language-o_donly-o_wrongly-and-o_rdwr-flags/)

* 42 get_next_line Overview:
  [https://harm-smits.github.io/42docs/projects/get_next_line](https://harm-smits.github.io/42docs/projects/get_next_line)

* Understanding `read()` in C:
  [https://www.educative.io/answers/read-data-from-a-file-using-read-in-c](https://www.educative.io/answers/read-data-from-a-file-using-read-in-c)


