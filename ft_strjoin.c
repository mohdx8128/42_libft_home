/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/01 01:20:57 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/01 02:55:56 by mabuuals        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	to_alloc;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	to_alloc = ft_strlen(s1) + ft_strlen(s2) + 1;
	strjoin = ft_calloc(to_alloc, sizeof(char));
	if (!strjoin)
		return (NULL);
	ft_strlcat(strjoin, (char *) s1, to_alloc);
	ft_strlcat(strjoin, (char *) s2, to_alloc);
	return (strjoin);
}
