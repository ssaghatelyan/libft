#include "../libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    size_t  i;
    unsigned char       *d;
    const unsigned char *s;

    if (!dst && !src)
        return (NULL);
    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    if (d < s)
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while (n > 0)
        {
            n--;
            d[n] = s[n];
        }
    }
    return (dst);
}