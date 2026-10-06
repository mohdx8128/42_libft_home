/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <mabuuals@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 03:30:25 by mabuuals          #+#    #+#             */
/*   Updated: 2026/10/06 03:51:52 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    if (!new ||!lst)
        return ;
    if (!*lst)
        *lst = new;
    else 
    {
        last = ft_lstlast(*lst);
        last->next = new;
    }
}