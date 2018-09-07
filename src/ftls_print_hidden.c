/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print_hidden.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:51:49 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 13:44:21 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print_hidden(t_lslink *l)
{
	t_lslink *tmp;

	while (l->next)
	{
		tmp = l;
		if (l->name)
		{
			ft_printf("%s", l->name);
			if (l->next->name != NULL)
				ft_printf("\t");
		}
		l = l->next;
	}
}