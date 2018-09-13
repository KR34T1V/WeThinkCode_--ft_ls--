/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_read_dir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 09:58:51 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 18:33:06 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_read_dir(char *path, t_lsflags *f)
{
	t_lslink	*l = NULL;
	char	*tmp;

	l = (t_lslink *)ft_memalloc(sizeof(t_lslink));
	path = ftls_get_path(path);
	ftls_get_all(path, l);
	if ((f->multi == 1 || f->R == 1) && 0 != ft_strcmp(path, "./") &&
		ft_isdir(path))
	{
		ft_printf("\n%s:\n",(tmp = ft_strsub(path,0,(ft_strlen(path) - 1))));
		free(tmp);
	}
	ftls_print(l, f);
	if (f->R == 1 && f->d == 0)
		ftls_recall(path, l, f);
	ftls_link_free(&l);
	sleep(30);
}