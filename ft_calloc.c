/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaghate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:03:04 by ssaghate          #+#    #+#             */
/*   Updated: 2026/01/28 13:09:06 by ssaghate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
