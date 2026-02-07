*This project has been created as part of the 42 curriculum by ssaghate.*

# Libft

## Description

Libft is a custom C library that reimplements essential functions from the standard C library, along with additional utilities for memory, string manipulation, and linked list management.

The goal of this project is to deepen understanding of:

- memory allocation
- pointers
- data structures
- string handling
- defensive programming
- low-level implementation details

This library will serve as a foundation for many future projects within the 42 curriculum.

---

## Features

✔ Reimplementation of standard libc functions  
✔ Additional string and memory utilities  
✔ Fully implemented singly linked list API  
✔ Written in pure C  
✔ No memory leaks  
✔ Norm compliant  

---

## Library Functions

### Character Checks
- `ft_isalpha` – checks if a character is alphabetic  
- `ft_isdigit` – checks if a character is a digit  
- `ft_isalnum` – checks if a character is alphanumeric  
- `ft_isascii` – checks if a character belongs to ASCII  
- `ft_isprint` – checks if a character is printable  

### Character Conversion
- `ft_toupper` – converts a character to uppercase  
- `ft_tolower` – converts a character to lowercase  

### String Functions
- `ft_strlen` – calculates string length  
- `ft_strlcpy` – copies a string safely  
- `ft_strlcat` – concatenates strings safely  
- `ft_strchr` – finds the first occurrence of a character  
- `ft_strrchr` – finds the last occurrence of a character  
- `ft_strncmp` – compares two strings  
- `ft_strnstr` – locates a substring  
- `ft_strdup` – duplicates a string  
- `ft_substr` – extracts a substring  
- `ft_strjoin` – joins two strings  
- `ft_strtrim` – trims characters from a string  
- `ft_split` – splits a string into an array  
- `ft_strmapi` – applies a function to each character  
- `ft_striteri` – iterates over a string  

### Memory Functions
- `ft_memset` – fills memory with a constant byte  
- `ft_bzero` – zeroes memory  
- `ft_memcpy` – copies memory  
- `ft_memmove` – safely copies overlapping memory  
- `ft_memchr` – scans memory  
- `ft_memcmp` – compares memory blocks  
- `ft_calloc` – allocates and zeroes memory  

### Conversion
- `ft_atoi` – converts a string to an integer  
- `ft_itoa` – converts an integer to a string  

### File Descriptor Output
- `ft_putchar_fd` – outputs a character  
- `ft_putstr_fd` – outputs a string  
- `ft_putendl_fd` – outputs a string followed by a newline  
- `ft_putnbr_fd` – outputs a number  

---

## Linked List Functions

The project also includes a full implementation of a singly linked list using the following structure:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
