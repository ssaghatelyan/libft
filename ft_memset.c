/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:30:29 by ssaghate          #+#    #+#             */
/*   Updated: 2026/01/27 17:31:08 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
	//c - char, n - how many bytes will be changed
{
	size_t			i;
	unsigned char	*str1;

	i = 0;
	str1 = (unsigned char *)str;
	while (i < n)
	{
		str1[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
