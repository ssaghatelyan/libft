#include "libft.h"

void	*ft_calloc(size_t num, size_t elsize)
{
    void	*ptr;

    ptr = malloc(num * elsize);
    if (ptr == 0)
        return (ptr);
    ft_bzero(ptr, num * elsize);
    return (ptr);
}