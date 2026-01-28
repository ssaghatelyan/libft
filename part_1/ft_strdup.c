#include "../libft.h"

char *ft_strdup(const char *str)
{
    size_t len;
    char *dup;
    size_t i;

    len = ft_strlen(str);
    dup = (char *)malloc(len + 1);
    if (!dup)
        return (NULL);
    i = 0;
    while (i < len)
    {
        dup[i] = str[i];
        i++;
    }
    dup[len] = '\0';
    return (dup);
}
