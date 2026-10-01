/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/01 02:56:33 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/01 06:02:36 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strchrdi(char const *s1, char const *set)
{
	size_t	size_s1;
	size_t	i;

	size_s1 = ft_strlen(s1);
	i = 0;
	while (i < size_s1)
	{
		if (!(ft_strchr(set, s1[i])))
			return (i);
		i++;
	}
	return (i);
}

static size_t	strchrrdi(char const *s1, char const *set)
{
	size_t	size_s1;

	size_s1 = ft_strlen(s1);
	while (size_s1)
	{
		if (!(ft_strrchr(set, s1[size_s1 - 1])))
			return (size_s1 - 1);
		size_s1--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	midstart;
	size_t	midend;
	char	*trimmed;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	midstart = strchrdi(s1, set);
	midend = strchrrdi(s1, set);
	trimmed = ft_substr(s1, midstart, (midend - midstart) + 1);
	return (trimmed);
}
