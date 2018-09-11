/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:59:22 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 09:56:50 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_long(t_lsflags *f, t_lslink *l)
{
	t_lslink	*tmp;
	int			total;

	total = 0;
	if (f->a == 0 && f->d == 0 && f->g == 0 && f->l == 1)
	{
		tmp = l;
		while (tmp->next)
		{
			if (tmp->name && tmp->name[0] != '.')
				total += tmp->block;	
			tmp = tmp->next;
		}
		ft_printf("total %i\n", total);
		tmp = l;
		while (tmp->next)
		{
			if (tmp->name && tmp->name[0] != '.')
			{
				ft_printf("%s ", tmp->perm);
				ft_printf("%3i ", tmp->links);
				ft_printf("%s  ", tmp->owner);
				ft_printf("%s ", tmp->group);
				ft_printf("%6i", tmp->fsize);
				ft_printf("%s ", tmp->time);
				ft_printf("%s\n", tmp->name);
			}
			tmp = tmp->next;
		}
	}
}