/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 02:53:58 by mabuuals          #+#    #+#             */
/*   Updated: 2026/09/29 03:27:30 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	ssize;

	ssize = ft_strlen(s);
	if (s[ssize] == (char) c)
		return ((char *) &s[ssize]);
	while (ssize)
	{
		if (s[ssize - 1] == (char) c)
			return ((char *) &s[ssize - 1]);
		ssize--;
	}
	return (NULL);
}
