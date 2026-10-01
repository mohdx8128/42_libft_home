/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 07:38:46 by mabuuals          #+#    #+#             */
/*   Updated: 2026/10/01 08:30:09 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	is_white_space(char c)
{
	return (c == 32 ||(c >= 9 && c <=13)); 
}

static size_t	num_strword(char *s)
{
	size_t	word;

	word = 0;
	while (is_white_space(*s))
		s++;
	while (*s)
	{
		while (is_white_space(*s))
			s++;
		if (*s)
			word++;
		while (!(is_white_space(*s)) && *(s))
			s++;
	}
	return (word);
}
//use substring to allocate memory for each word
//build split function 
/*char **ft_split(char const *s, char c)
{
	//allocate number of words in the alloc

}*/

int main()
{
	printf("Number of words: %zu", num_strword("   The Sky is beatiful     aakd   lksdf slkdjf "));
}
