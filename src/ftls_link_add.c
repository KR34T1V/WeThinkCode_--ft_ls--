/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_link_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 09:33:25 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 10:43:22 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

t_lslink	*ftls_link_add(t_lslink *l)
{
	t_lslink		*tmp = NULL;

	if (l)
	{
		if (!tmp)
			tmp = (t_lslink *)ft_memalloc(sizeof(t_lslink));
		tmp->prev = l;
		l->next = tmp;
		
	}
	return(tmp);
}