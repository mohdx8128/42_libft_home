/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 05:29:35 by mabuuals          #+#    #+#             */
/*   Updated: 2026/09/30 23:19:19 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = (char *) malloc((ft_strlen((char *) s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	return (ft_memmove(dest, (char *) s, ft_strlen((char *) s) + 1));
}
