/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_group.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:55:30 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 12:05:58 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_group(char *path, t_lslink *l)
{
	struct stat		st;
	struct group	*gr = NULL;
	
	if(ft_isdir(path))
		stat(ft_strjoin(path, l->name), &st);
	else if (!(ft_isdir(path)))
		stat(path, &st);
	gr = getgrgid(st.st_gid);
	l->group = ft_strdup(gr->gr_name);
}