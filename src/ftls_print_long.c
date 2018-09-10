/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:59:22 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/10 16:05:04 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_long(t_lsflags *f, t_lslink *l)
{
	t_lslink *tmp;

	if (f->a == 0 && f->d == 0 && f->g == 0 && f->l == 1)
	{
		tmp = l;
		while (tmp->next)
		{
			if (tmp->name && tmp->name[0] != '.')
			{
				ft_printf("%i\t", tmp->block);
				ft_printf("%s\t", tmp->perm);
				ft_printf("%i\t", tmp->links);
				ft_printf("%s\t", tmp->owner);
				ft_printf("%s\t", tmp->group);
				ft_printf("%s\n", tmp->time);	
			}
			tmp = tmp->next;
		}
	}
}