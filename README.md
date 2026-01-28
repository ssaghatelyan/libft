# Libft

## Description

Libft is a custom C library created as part of the 42 curriculum.  
It reimplements a collection of standard C functions and adds useful utilities for strings, memory, and character operations.  
This library helps understand C fundamentals, memory management, and function implementation from scratch.  

## Library Functions

| Category             | Function Name           | Description                                           |
|----------------------|-------------------------|-------------------------------------------------------|
| Character checks     | `ft_isalpha`            | Checks if a character is alphabetic                   |
|                      | `ft_isdigit`            | Checks if a character is a digit                      |
|                      | `ft_isalnum`            | Checks if a character is alphanumeric                 |
|                      | `ft_isascii`            | Checks if a character is an ASCII character           |
|                      | `ft_isprint`            | Checks if a character is printable                    |
| Character conversion | `ft_toupper`            | Converts a character to uppercase                     |
|                      | `ft_tolower`            | Converts a character to lowercase                     |
| String manipulation  | `ft_strlen`             | Returns the length of a string                        |
|                      | `ft_strlcpy`            | Copies a string with size limit                       |
|                      | `ft_strlcat`            | Concatenates strings with size limit                  |
|                      | `ft_strchr`             | Finds the first occurrence of a character             |
|                      | `ft_strrchr`            | Finds the last occurrence of a character              |
|                      | `ft_strncmp`            | Compares two strings up to n characters               |
|                      | `ft_strnstr`            | Finds a substring in a string up to n characters      |
|                      | `ft_strdup`             | Duplicates a string                                   |
| Memory management    | `ft_memset`             | Fills memory with a constant byte                     |
|                      | `ft_bzero`              | Sets memory to zero                                   |
|                      | `ft_memcpy`             | Copies memory from source to destination              |
|                      | `ft_memmove`            | Copies memory safely even if regions overlap          |
|                      | `ft_memchr`             | Searches memory for a byte                            |
|                      | `ft_memcmp`             | Compares two memory blocks                            |
|                      | `ft_calloc`             | Allocates and zero-initializes memory                 |
| Conversion           | `ft_atoi`               | Converts a string to an integer                       |
