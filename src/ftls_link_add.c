/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_link_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 09:33:25 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:25:17 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

t_lslink	*ftls_link_add(t_lslink *l)
{
	t_lslink		*tmp;

	tmp = NULL;
	if (l)
	{
		tmp = l->next;
		if (!tmp)
			tmp = (t_lslink *)ft_memalloc(sizeof(t_lslink));
		tmp->prev = l;
		l->next = tmp;
	}
	return (tmp);
}
