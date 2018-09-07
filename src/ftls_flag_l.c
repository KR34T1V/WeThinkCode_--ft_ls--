/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_flag_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:07:29 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 14:22:39 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_flag_l(const char *path, t_lslink *l)
{
	DIR				*dir;
	struct dirent	*ent;
	struct stat		*st = NULL;
	t_lslink		*tmp;
	
	if (ft_isdir(path))
	{
		dir = opendir(path);
		tmp = l;
		while ((ent = readdir(dir)) != NULL)
		{
			stat(ent->d_name, st);
			tmp->name = ent->d_name;
			tmp->next = (t_lslink *)ft_memalloc(sizeof(t_lslink));
			tmp = tmp->next;
		}
}