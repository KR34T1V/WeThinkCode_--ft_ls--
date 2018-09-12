/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_group.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:55:30 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/12 16:15:46 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_group(char *path, t_lslink *l)
{
	struct stat		st;
	struct group	*gr = NULL;
	
	stat(ft_strjoin(path, l->name), &st);
	gr = getgrgid(st.st_gid);
	l->group = ft_strdup(gr->gr_name);
}