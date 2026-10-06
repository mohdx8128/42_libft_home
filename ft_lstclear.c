/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <mabuuals@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 04:15:13 by mabuuals          #+#    #+#             */
/*   Updated: 2026/10/06 04:49:12 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *current;
    t_list *next;

    
    if (!lst || !del)
        return ;
    current = *lst;
    *lst = NULL;
    while (current)
    {
        next = current->next;
        ft_lstdelone(current, del);
        current = next;
    }
}