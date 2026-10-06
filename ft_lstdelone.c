/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/06 03:56:58 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/06 09:15:33 by mabuuals        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)((void *) lst->content);
	free(lst);
}
