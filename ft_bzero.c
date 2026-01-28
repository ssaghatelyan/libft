/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:45:47 by ssaghate          #+#    #+#             */
/*   Updated: 2026/01/28 13:09:22 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*str1;

	str1 = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		str1[i] = 0;
		i++;
	}
}
