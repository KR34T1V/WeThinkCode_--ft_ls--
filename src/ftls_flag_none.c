/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_flag_none.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:47:32 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 10:02:26 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_flag_none(const char *path, t_lslink *l)
{
	DIR				*dir;
	struct dirent	*ent;
	struct stat		*st = NULL;
	struct passwd	*pw;
	struct group	*gr;

	dir = opendir(path);
	while ((ent = readdir(dir)) != NULL)
	{
		stat(ent->d_name , st);
		pw = getpwuid(st->st_uid);
		gr = getgrgid(st->st_gid);
		l->name = ent->d_name;
	}
}