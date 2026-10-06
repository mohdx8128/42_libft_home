/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 02:00:36 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/04 05:17:07 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	number;
	int		sign;
	char	*str;

	number = 0;
	sign = 1;
	str = (char *) nptr;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\t' || *str == '\r' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return ((int) sign * number);
}
