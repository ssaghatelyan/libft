#include "libft.h"

void    *ft_memset(void *str, int c, size_t n) //c - char, n - how many bytes will be changed
{
    size_t i;
    unsigned char *str1;

    i = 0;
    str1 = (unsigned char *)str;
    while (i < n)
    {
        str1[i] = (unsigned char)c;
        i++;
    }
    return (str);
}