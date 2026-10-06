/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <mabuuals@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 02:24:46 by mabuuals          #+#    #+#             */
/*   Updated: 2026/10/06 03:17:10 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int    count;

    count = 0;
    while (lst)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}