/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_flag_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:48:10 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 11:18:57 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

static void	ftls_flag_toggle(char c, t_lsflags *f)
{
	if (c == 'R')
		f->R = 1;
	else if (c == 'a')
		f->a = 1;
	else if (c == 'l')
		f->l = 1;
	else if (c == 'r')
		f->r = 1;
	else if (c == 't')	
		f->t = 1;
	else if (c == 'u')
		f->u = 1;
	else if (c == 'f')
	{
		f->f = 1;
		f->a = 1;
	}
	else if (c == 'g')
		f->g = 1;
	else if (c == 'd')
	{
		f->d = 1;
		f->a = 1;
	}
}

void	ftls_flag_set(char *str, t_lsflags *f)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_iscfound(LSVALID, str[i]))
		{
			ftls_flag_toggle(str[i], f);
			f->flags = 1;
		}
		else
			ft_quit("\nERROR: Invalid Flag!");
		i++;
	}
}