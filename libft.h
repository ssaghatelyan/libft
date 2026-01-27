#ifndef LIBFT_LIBFT_H
#define LIBFT_LIBFT_H

#include <unistd.h>
#include <stdio.h>

int    ft_isalpha(int c);
int    ft_isdigit(int c);
int    ft_isalnum(int c);
int    ft_isascii(int c);
int    ft_isprint(int c);
int    ft_toupper(int c);
int    ft_tolower(int c);
int    ft_strlen(char *str);
int    ft_atoi(char *str);
int    ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strchr(char *str, int c);
void    *ft_memset(void *str, int c, size_t n);
void    *ft_memcpy(void *dst, void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t n);
void    ft_bzero(void *str, size_t n);

#endif