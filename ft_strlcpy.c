#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t i;
    size_t len;

    len = 0;
    while (src[len])
        len++;
    if (n == 0)
        return (len);
    i = 0;
    while (src[i] && i < n - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}