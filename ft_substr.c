/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/30 23:33:55 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/04 04:50:14 by mabuuals        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	remaining;
	size_t	len_to_alloc;

	if (!s)
		return (NULL);
	else if (start >= ft_strlen(s))
	{
		substr = malloc(1 * sizeof(char));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	remaining = ft_strlen(s + start);
	if (len > ft_strlen(s + start))
		len_to_alloc = remaining + 1;
	else
		len_to_alloc = len + 1;
	substr = malloc(len_to_alloc * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len_to_alloc);
	return (substr);
}
