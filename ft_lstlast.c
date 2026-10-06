/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <mabuuals@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 03:25:23 by mabuuals          #+#    #+#             */
/*   Updated: 2026/10/06 03:30:04 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while (lst)
    {
        if (!(lst->next))
            break;
        lst = lst->next;
    }
    return (lst);
}