/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:03:04 by ssaghate          #+#    #+#             */
/*   Updated: 2026/02/02 17:22:17 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t elsize)
{
	void	*ptr;

	if (num && elsize > SIZE_MAX / num)
		return (NULL);
	ptr = malloc(num * elsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * elsize);
	return (ptr);
}
