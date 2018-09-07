/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_group.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:55:30 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 14:57:13 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_group(t_lslink *l)
{
	struct stat		*st = NULL;
	struct group	*gr = NULL;
	
	stat(l->name, st);
	gr = getgrgid(st->st_gid);
	l->group = gr->gr_name;
}