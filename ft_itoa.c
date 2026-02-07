/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:49:16 by ssaghate          #+#    #+#             */
/*   Updated: 2026/02/07 19:49:17 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	i;
	int	j;

	i = 0;
	j = n;
	if (n <= 0)
		i = 1;
	while (j)
	{
		j /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	long		j;
	char		*p;

	i = ft_numlen(n);
	p = (char *)malloc(i + 1);
	if (!p)
		return (NULL);
	p[i] = '\0';
	j = n;
	if (j < 0)
		j = -j;
	if (n == 0)
		p[0] = '0';
	while (j)
	{
		p[--i] = j % 10 + '0';
		j /= 10;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
