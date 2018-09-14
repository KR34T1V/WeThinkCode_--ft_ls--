/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_link_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:44:34 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 08:17:47 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_link_free(t_lslink **l)
{
	t_lslink	*tmp;
	t_lslink	*next;

	tmp = *l;
	while (tmp)
	{
		next = tmp;
		tmp = tmp->next;
		next->block = 0;
		ft_strdel(&next->name);
		next->namelen = 0;
		ft_strdel(&next->perm);
		next->links = 0;
		ft_strdel(&next->owner);
		ft_strdel(&next->group);
		next->fsize = 0;
		ft_strdel(&next->time);
		next->ntime = 0;
		next->next = NULL;
		next->prev = NULL;
		free(next);
	}
	l = NULL;
}
