/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuuals <mabuuals@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 01:40:38 by mabuuals          #+#    #+#             */
/*   Updated: 2026/10/06 02:22:55 by mabuuals         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newnode;


    newnode = (t_list *) malloc(sizeof(t_list));
    if (!newnode)
        return (NULL);
    newnode->content = content;
    newnode->next = NULL;
    return (newnode);
}