/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:38:29 by ssaghate          #+#    #+#             */
/*   Updated: 2026/01/28 13:37:46 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)ptr);
}
