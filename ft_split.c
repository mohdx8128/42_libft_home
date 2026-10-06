/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/01 07:38:46 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/04 05:10:53 by mabuuals        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_del(char const del, char const c)
{
	return (del == c);
}

static size_t	countword(char *s, char const del)
{
	size_t	word;

	word = 0;
	while (*s)
	{
		while (is_del(del, *s) && *s)
			s++;
		if (*s)
			word++;
		while (!(is_del(del, *s)) && *s)
			s++;
	}
	return (word);
}

static char	*word(char *s, char const del)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[wordlen] && !(is_del(del, s[wordlen])))
		wordlen++;
	return (ft_substr(s, 0, wordlen));
}

static void	free_all(char **arr, size_t n)
{
	while (n--)
		free(arr[n]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arrstr;
	size_t	i;

	if (!s)
		return (NULL);
	arrstr = malloc((countword((char *) s, c) + 1) * sizeof(char *));
	if (!arrstr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (is_del(c, *s) && *s)
			s++;
		if (!*s)
			break ;
		*(arrstr + i) = word((char *) s, c);
		if (!*(arrstr + i))
			return (free_all(arrstr, i), NULL);
		while (!(is_del(c, *s)) && *s)
			s++;
		i++;
	}
	*(arrstr + i) = NULL;
	return (arrstr);
}
