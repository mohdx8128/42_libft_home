/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:40:55 by mabuuals          #+#    #+#             */
/*   Updated: 2026/09/28 21:19:21 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == src || n == 0)
		return (dest);
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((t_byte *)dest)[i] = ((t_byte *)src)[i];
		}
	}
	else 
		ft_memcpy(dest, src, n);
	return (dest);
}
