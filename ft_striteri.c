/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/04 03:56:59 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/04 05:12:20 by mabuuals        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		(*f)(i, &s[i]);
		i++;
	}
}
