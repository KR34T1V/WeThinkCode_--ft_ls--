/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:44:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 10:41:24 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_all(char *path, t_lslink *l)
{
	DIR				*dir;
	struct dirent	*ent;
	t_lslink		*tmp;
	t_lslink		*prev;

	if (ft_isdir(path))
	{
		dir = opendir(path);
		tmp = l;
		while ((ent = readdir(dir)) != NULL)
		{
			if (!(tmp))
				tmp = ftls_link_add(prev);
			ftls_get_name(tmp, ent);
			ftls_get_perm(path, tmp);
			ftls_get_links(path, tmp);
			ftls_get_owner(path, tmp);
			ftls_get_group(path, tmp);
			ftls_get_fsize(path, tmp);
			ftls_get_time(path, tmp);
			ftls_get_block(path, tmp);
			prev = tmp;
			tmp = tmp->next;
		}
	}
}
