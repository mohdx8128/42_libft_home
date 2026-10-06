/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <mabuuals@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 05:12:36 by mabuuals          #+#    #+#             */
/*   Updated: 2026/10/06 06:11:39 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *res;
    t_list  *next;
    t_list  *current;

    if (!f || !del || !lst)
        return (NULL);
    res = ft_lstnew(f(lst->content));
    if (!res)
    {
        del(res->content);
        return (NULL);
    }
    current = res;
    next = lst->next;
    while (next)
    {
        current = ft_lstnew(f(next->content));
        if(!current)
        {
            ft_lstclear(&res, del);
            return (NULL);
        }
        ft_lstadd_back(&res, current);
        next = next->next;
    }
    return (res);
}