/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_perm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:33:20 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 14:47:46 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_perm(t_lslink *l)
{
	struct stat		*st = NULL;
	char			*tmp;

	stat(l->name, st);
		tmp = ft_strnew(10);
		tmp[0] = (S_ISDIR(st->st_mode)) ? 'd' : '-';
		tmp[1] = (S_IRUSR & st->st_mode) ? 'r' : '-';
		tmp[2] = (S_IWUSR & st->st_mode) ? 'w' : '-';
		tmp[3] = (S_IXUSR & st->st_mode) ? 'x' : '-';
		tmp[4] = (S_IRGRP & st->st_mode) ? 'r' : '-';
		tmp[5] = (S_IWGRP & st->st_mode) ? 'w' : '-';
		tmp[6] = (S_IXGRP & st->st_mode) ? 'x' : '-';
		tmp[7] = (S_IROTH & st->st_mode) ? 'r' : '-';
		tmp[8] = (S_IWOTH & st->st_mode) ? 'w' : '-';
		tmp[9] = (S_IXOTH & st->st_mode) ? 'x' : '-';
		l->perm = tmp;
		free(tmp);
}