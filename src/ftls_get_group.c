/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_group.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:55:30 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:18:53 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_group(char *path, t_lslink *l)
{
	struct stat		st;
	struct group	*gr;
	char			*fre;

	if (ft_isdir(path))
	{
		stat(fre = ft_strjoin(path, l->name), &st);
		free(fre);
	}
	else if (!(ft_isdir(path)))
		stat(path, &st);
	gr = getgrgid(st.st_gid);
	l->group = ft_strdup(gr->gr_name);
}
