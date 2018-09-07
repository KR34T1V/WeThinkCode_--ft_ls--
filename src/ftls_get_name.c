/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:23:52 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 14:46:51 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_name(char *path, t_lslink *l)
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
			tmp->namelen = ft_strlen(tmp->name);
			tmp->next = (t_lslink *)ft_memalloc(sizeof(t_lslink));
			tmp = tmp->next;
		}
	}
}