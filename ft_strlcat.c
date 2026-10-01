/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 23:18:15 by mabuuals          #+#    #+#             */
/*   Updated: 2026/09/28 23:59:20 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	tofill;
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	i = 0;
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	tofill = size - dstsize - 1;
	if (dstsize >= size)
		return (size + srcsize);
	while (src[i] && i < tofill)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
