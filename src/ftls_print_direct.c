/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_direct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:17:00 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 10:40:26 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_direct(t_lsflags *f, t_lslink *l)
{
	t_lslink *tmp;

	if (f->d == 1 && f->g == 0 && f->l == 0)
	{
		tmp = l;
		while (tmp->next)
		{
			if (tmp->name && ft_isdir(tmp->name))
			{
				ft_printf("%s", tmp->name);
				if (tmp->next->name != NULL)
					ft_printf("\t");
			}
			tmp = tmp->next;
		}
	}
}
