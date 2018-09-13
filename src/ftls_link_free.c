/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_link_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:44:34 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 12:42:22 by cterblan         ###   ########.fr       */
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
		tmp->dir = 0;
		next = tmp->next;
		tmp->block = 0;
		free(tmp->name);
		tmp->namelen = 0;
		free(tmp->perm);
		tmp->links = 0;
		free(tmp->owner);
		free(tmp->group);
		tmp->fsize = 0;
		free(tmp->time);
		tmp->ntime = 0;
		tmp->prev = NULL;
		tmp->next = NULL;
		tmp = next;
	}
	free(*l);
	l = NULL;
}