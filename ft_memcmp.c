/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 04:13:57 by mabuuals          #+#    #+#             */
/*   Updated: 2026/09/29 04:20:28 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n)
	{
		if(((t_byte *)s1) [i] != ((t_byte *)s2) [i])
			return (((t_byte *)s1) [i] - ((t_byte *)s2) [i]);
		i++;
	}
	return(0);
}
