#include <stdio.h>
#include "libft.h"

int main(void)
{
    // ft_atoi
    printf("ft_atoi(\"-42\") = %d\n", ft_atoi("-42"));

    // ft_bzero
    char bzero_buf[4] = "abc";
    ft_bzero(bzero_buf, 3);
    printf("ft_bzero: %d %d %d\n", bzero_buf[0], bzero_buf[1], bzero_buf[2]);

    // ft_isalnum
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));

    // ft_isalpha
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));

    // ft_isascii
    printf("ft_isascii(128) = %d\n", ft_isascii(128));

    // ft_isdigit
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));

    // ft_isprint
    printf("ft_isprint(31) = %d\n", ft_isprint(31));

    // ft_memcpy
    char src[] = "Hi";
    char dst[3];
    ft_memcpy(dst, src, 3);
    printf("ft_memcpy: %s\n", dst);

    // ft_memmove
    char move_buf[6] = "12345";
    ft_memmove(move_buf + 1, move_buf, 4);
    printf("ft_memmove: %s\n", move_buf);

    // ft_memset
    char set_buf[6];
    ft_memset(set_buf, '-', 5);
    set_buf[5] = '\0';
    printf("ft_memset: %s\n", set_buf);

    // ft_strchr
    char *str = "libft";
    printf("ft_strchr('b') = %s\n", ft_strchr(str, 'b'));

    // ft_strlen
    printf("ft_strlen(\"libft\") = %zu\n", ft_strlen("libft"));

    // ft_strncmp
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2));

    // ft_tolower
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));

    // ft_toupper
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));

    return 0;
}