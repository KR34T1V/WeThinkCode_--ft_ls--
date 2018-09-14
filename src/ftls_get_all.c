/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:44:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 08:16:03 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

static void	ftls_gets_file(char *path, t_lslink *l)
{
	t_lslink		*tmp;
	t_lslink		*prev;

	tmp = l;
	prev = l;
	if (!(tmp))
		tmp = ftls_link_add(prev);
	l->name = ft_strdup(path);
	l->namelen = ft_strlen(l->name);
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

static void	ftls_gets_dir(char *path, t_lslink *l, DIR *dir)
{
	t_lslink		*tmp;
	t_lslink		*prev;
	struct dirent	*ent;

	tmp = l;
	prev = l;
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

void		ftls_get_all(char *path, t_lslink *l, t_lsflags *f)
{
	DIR				*dir;

	dir = opendir(path);
	if (dir == NULL)
	{
		if (ft_strcmp(strerror(errno), "Not a directory") == 0)
		{
			f->dir = 0;
			ftls_gets_file(path, l);
		}
		else
			ft_quit("ERROR: Not a valid file/directory\n");
	}
	else
	{
		f->dir = 1;
		ftls_gets_dir(path, l, dir);
	}
	closedir(dir);
}
