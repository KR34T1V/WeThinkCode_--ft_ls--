/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_none.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:51:49 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 08:34:15 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_none(t_lsflags *f, t_lslink *l)
{
	t_lslink *tmp;

	if (f->a == 0 && f->l == 0 && f->d == 0)
	{
		tmp = l;
		while (tmp)
		{
			if (tmp && tmp->name[0] != '.')
			{
				ft_printf("%s", tmp->name);
				if (tmp->next)
					ft_printf("\t");
			}
			tmp = tmp->next;
		}
		ft_printf("\n");
	}
	else if ((f->a == 1 || f->d == 1) && f->l == 0)
		ftls_print_hidden(f, l);
}
