*This project has been created as part of the 42 curriculum by ssaghate.*

# Libft

## Description

**Libft** is a custom C library that reimplements essential standard library functions and introduces additional utilities for memory management, string manipulation, file descriptor output, and linked list handling.

The goal of this project is to build a strong foundation in C programming by understanding how common functions work internally and by writing clean, reliable, and reusable code.

---

## Features

The library is divided into three main parts:

### Part 1 — Libc Functions

Reimplementation of commonly used functions such as:

* Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* String functions: `ft_strlen`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`
* Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* Case conversion: `ft_toupper`, `ft_tolower`
* Conversion: `ft_atoi`
* Allocation: `ft_calloc`, `ft_strdup`

---

### Part 2 — Additional Functions

Higher-level utilities built on top of the basics:

* `ft_substr` — extract a substring
* `ft_strjoin` — concatenate two strings
* `ft_strtrim` — trim characters from a string
* `ft_split` — split a string by a delimiter
* `ft_itoa` — convert an integer to a string
* `ft_strmapi` / `ft_striteri` — apply a function to each character
* Output functions:

  * `ft_putchar_fd`
  * `ft_putstr_fd`
  * `ft_putendl_fd`
  * `ft_putnbr_fd`

---

### Part 3 — Linked List Functions

Implementation of a generic singly linked list using the `t_list` structure.

Main operations include:

* Creating nodes — `ft_lstnew`
* Adding nodes — `ft_lstadd_front`, `ft_lstadd_back`
* Traversing — `ft_lstiter`, `ft_lstmap`
* Utilities — `ft_lstsize`, `ft_lstlast`
* Memory management — `ft_lstdelone`, `ft_lstclear`

---

## Compilation

To compile the library, run:

```bash
make
```

This will generate:

```
libft.a
```

### Available Makefile rules:

```bash
make        # compile the library
make clean  # remove object files
make fclean # remove object files and library
make re     # rebuild everything
```

---

## Usage

Include the header in your C file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c libft.a
```

---

## Technical Notes

* Written in **C** following the **42 Norm**
* Compiled with flags: `-Wall -Wextra -Werror`
* No global variables
* Memory is properly allocated and freed
* Helper functions are declared `static` when needed

---

## Resources

* Manual pages (`man`)
* The C Programming Language — Kernighan & Ritchie
* 42 documentation

### AI Usage

AI was used as a **learning support tool** to clarify concepts, review structure, and improve documentation. All functions were implemented and understood as part of the learning process.

---

## Conclusion

Libft serves as a fundamental toolkit that will be reused throughout the 42 curriculum. Building this library strengthens core programming skills and deepens understanding of low-level operations in C.
Libft serves as a fundamental toolkit that will be reused throughout the 42 curriculum.
Building this library strengthens core programming skills and deepens understanding of low-level operations in C.
