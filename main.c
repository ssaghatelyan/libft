/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:13:17 by ssaghate          #+#    #+#             */
/*   Updated: 2026/01/28 14:06:30 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	buf1[10];
	char	buf2[10];
	char	dst[10];
	char	move[6];
	char	mem[7];
	char	cpy[10];
	char	cat[20];
	char	*dup;
	int	*arr;

	printf("ft_isalpha: %d\n", ft_isalpha('A'));
	printf("ft_isdigit: %d\n", ft_isdigit('5'));
	printf("ft_isalnum: %d\n", ft_isalnum('9'));
	printf("ft_isascii: %d\n", ft_isascii(127));
	printf("ft_isprint: %d\n", ft_isprint(31));
	printf("ft_toupper: %c\n", ft_toupper('a'));
	printf("ft_tolower: %c\n", ft_tolower('Z'));
	printf("ft_strlen: %d\n", ft_strlen("Hello"));
	printf("ft_atoi: %d\n", ft_atoi("  -123"));
	printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3));
	printf("ft_memcmp: %d\n", ft_memcmp("abc", "abc", 3));
	ft_strlcpy(buf1, "abcdef", 10);
	ft_memset(buf1, 'X', 3);
	printf("ft_memset: %s\n", buf1);
	ft_strlcpy(buf2, "abcdef", 10);
	ft_bzero(buf2, 3);
	printf("ft_bzero: %s\n", buf2 + 3);
	ft_memcpy(dst, "Hello", 6);
	printf("ft_memcpy: %s\n", dst);
	ft_strlcpy(move, "12345", 6);
	ft_memmove(move + 1, move, 4);
	printf("ft_memmove: %s\n", move);
	ft_strlcpy(mem, "abcdef", 7);
	printf("ft_memchr: %s\n", (char *)ft_memchr(mem, 'd', 6));
	printf("ft_strchr: %s\n", ft_strchr("Hello", 'l'));
	printf("ft_strrchr: %s\n", ft_strrchr("Hello", 'l'));
	printf("ft_strnstr: %s\n", ft_strnstr("Hello world", "world", 11));
	dup = ft_strdup("Duplicate");
	printf("ft_strdup: %s\n", dup);
	free(dup);
	ft_strlcpy(cpy, "Hello", 10);
	printf("ft_strlcpy: %s\n", cpy);
	ft_strlcpy(cat, "Hello ", 20);
	ft_strlcat(cat, "world", 20);
	printf("ft_strlcat: %s\n", cat);
	arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("ft_calloc failed\n");
		return 1;
	}
	printf("ft_calloc: \nBefore writing:\n");
	for (size_t i = 0; i < 5; i++)
		printf("%d ", arr[i]); // должно вывести 0
	for (size_t i = 0; i < 5; i++)
		arr[i] = (int)(i + 1);
	printf("\nAfter writing:\n");
	for (size_t i = 0; i < 5; i++)
		printf("%d ", arr[i]); // должно вывести 1 2 3 4 5
	free(arr);
	return (0);
}
