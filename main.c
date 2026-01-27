#include <stdio.h>
#include "libft.h"

int main(void)
{
    /* ft_atoi */
    printf("ft_atoi(\"-42\") = %d\n", ft_atoi("-42"));

    /* ft_bzero */
    char bzero_buf[4] = "abc";
    ft_bzero(bzero_buf, 3);
    printf("ft_bzero: %d %d %d\n",
           bzero_buf[0], bzero_buf[1], bzero_buf[2]);

    /* ft_isalnum */
    printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));

    /* ft_isalpha */
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));

    /* ft_isascii */
    printf("ft_isascii(128) = %d\n", ft_isascii(128));

    /* ft_isdigit */
    printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));

    /* ft_isprint */
    printf("ft_isprint(31) = %d\n", ft_isprint(31));

    /* ft_memcpy */
    char src[] = "Hi";
    char dst[4];
    ft_memcpy(dst, src, 3);
    dst[3] = '\0';
    printf("ft_memcpy: %s\n", dst);

    /* ft_memmove (overlap) */
    char move_buf[6] = "12345";
    ft_memmove(move_buf + 1, move_buf, 4);
    printf("ft_memmove: %s\n", move_buf);

    /* ft_memset */
    char set_buf[6];
    ft_memset(set_buf, '-', 5);
    set_buf[5] = '\0';
    printf("ft_memset: %s\n", set_buf);

    /* ft_strchr */
    char *str = "libft";
    char *res = ft_strchr(str, 'b');
    if (res)
        printf("ft_strchr('b') = %s\n", res);
    else
        printf("ft_strchr('b') = NULL\n");

    /* ft_strlen */
    printf("ft_strlen(\"libft\") = %zu\n", ft_strlen("libft"));

    /* ft_strncmp */
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n",
           ft_strncmp("abc", "abd", 2));

    /* ft_strlcpy */
    char lcpy_dst[6];
    size_t lcpy_len = ft_strlcpy(lcpy_dst, "hello!!!!", sizeof(lcpy_dst));
    printf("ft_strlcpy: dst=\"%s\", src_len=%zu\n", lcpy_dst, lcpy_len);

    /* ft_tolower */
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));

    /* ft_toupper */
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));

    /* ft_strlcat */
    char cat_buf[13] = "Hello";
    size_t len_cat = ft_strlcat(cat_buf, " World!", sizeof(cat_buf));
    printf("ft_strlcat: '%s', returned: %zu\n", cat_buf, len_cat);

    /* ft_strrchr */
    char *str2 = "hello world";
    char *res1 = ft_strrchr(str2, '0');
    if (res1)
        printf("ft_strrchr('0') = %s\n", res1);
    else
        printf("ft_strrchr: not found\n");

    /* ft_memchr */
    char mem_buf[] = "abcdef";
    printf("ft_memchr('d') = %s\n", (char *)ft_memchr(mem_buf, 'd', 6));

    /* ft_memcmp */
    char cmp1[] = "abc";
    char cmp2[] = "abd";
    int cmp_res = ft_memcmp(cmp1, cmp2, 3);
    printf("ft_memcmp: cmp1 vs cmp2 = %d\n", cmp_res);

    /* ft_strnstr */
    char *text = "Hello world";
    char *found = ft_strnstr(text, "world", 11);
    if (found)
        printf("ft_strnstr: \"%s\"\n", found);
    else
        printf("ft_strnstr: not found\n");

    return 0;
}