/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: mabuuals <mabuuals@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/06 05:12:36 by mabuuals         #+#    #+#              */
/*   Updated: 2026/10/06 10:10:45 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	if (!f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, current);
		lst = lst->next;
	}
	return (head);
}
