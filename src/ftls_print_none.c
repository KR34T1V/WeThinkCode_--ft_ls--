/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_none.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:51:49 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 13:42:53 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_none(t_lslink *l)
{
	t_lslink *tmp;

	while (l->next)
	{
		tmp = l;
		if (l->name && l->name[0] != '.')
		{
			ft_printf("%s", l->name);
			if (l->next->name != NULL)
				ft_printf("\t");
		}
		l = l->next;
	}
}