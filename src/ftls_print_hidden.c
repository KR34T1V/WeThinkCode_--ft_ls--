/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_hidden.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:51:49 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 08:33:10 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_hidden(t_lsflags *f, t_lslink *l)
{
	t_lslink *tmp;

	if ((f->a == 1 || f->d == 1) && f->l == 0)
	{
		tmp = l;
		while (tmp)
		{
			if (tmp->name)
			{
				ft_printf("%s", tmp->name);
				if (f->d == 0 && tmp->next)
					ft_printf("\t");
			}
			if (f->d == 1)
				break ;
			tmp = tmp->next;
		}
		ft_printf("\n");
	}
}
