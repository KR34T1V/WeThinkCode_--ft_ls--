/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_flag_none.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:47:32 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 14:35:42 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_flag_none(const char *path, t_lslink *l)
{
	DIR				*dir;
	struct dirent	*ent;
	t_lslink		*tmp;
	
	if (ft_isdir(path))
	{
		dir = opendir(path);
		tmp = l;
		while ((ent = readdir(dir)) != NULL)
		{
			tmp->name = ent->d_name;
			tmp->next = (t_lslink *)ft_memalloc(sizeof(t_lslink));
			tmp = tmp->next;
		}
		ftls_print_none(l);
	}
}