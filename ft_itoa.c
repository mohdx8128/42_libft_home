/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/03 23:48:31 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/04 05:11:26 by mabuuals        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static size_t	intdigitnbr(long nb)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
		len = 1;
	if (nb < 0)
		nb = -nb;
	while (nb)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*str;

	nb = n;
	len = intdigitnbr(nb);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb)
	{
		str[--len] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
