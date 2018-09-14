/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_blocktotal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 10:12:34 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:17:42 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

int		ftls_get_blocktotal(t_lslink *l, t_lsflags *f)
{
	int		total;

	total = 0;
	if (f->a == 0)
		while (l)
		{
			if (l->name && l->name[0] != '.')
				total += l->block;
			l = l->next;
		}
	else if (f->a == 1)
		while (l)
		{
			if (l->name)
				total += l->block;
			l = l->next;
		}
	return (total);
}
