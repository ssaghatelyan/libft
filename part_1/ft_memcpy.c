#include "../libft.h"

void *ft_memcpy(void *dst, void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    unsigned char *s;

    if (!dst && !src)
        return (NULL);
    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}