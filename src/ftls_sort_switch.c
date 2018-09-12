/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_sort_switch.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 09:42:30 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/12 09:48:49 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void    ftls_sort_switch(t_lslink **head, t_lslink *node)
{
    t_lslink *prev;
    t_lslink *next;
    t_lslink *tmp;

    prev = node->prev;
    next = node->next;
    tmp = next->next;
    
    if (!prev)
        *head = next;
    else
        prev->next = next;
    if (tmp)
        tmp->prev = node;
    
    next->next = node;
    next->prev = prev;
    node->prev = next;
    node->next = tmp;
}