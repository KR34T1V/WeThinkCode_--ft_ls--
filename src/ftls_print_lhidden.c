/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_lhidden.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:03:59 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 13:46:05 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_lhidden(t_lsflags *f, t_lslink *l)
{
	t_lslink	*tmp;

	if ((f->a == 1 || f->d == 1) && (f->l == 1 || f->g == 1))
	{
		tmp = l;
		tmp = l;
		while (tmp->next)
		{
			if (tmp->name)
			{
				ft_printf("%s ", tmp->perm);
				ft_printf("%3i ", tmp->links);
				if (f->g != 1)
					ft_printf("%s  ", tmp->owner);
				ft_printf("%s ", tmp->group);
				ft_printf("%6i", tmp->fsize);
				ft_printf("%s ", tmp->time);
				ft_printf("%s\n", tmp->name);
			}
			if (f->d == 1)
				break ;
			tmp = tmp->next;
		}
	}
}