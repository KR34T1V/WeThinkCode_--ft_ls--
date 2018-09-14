/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_read_dir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 09:58:51 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 09:35:46 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_read_dir(char *path, t_lsflags *f)
{
	t_lslink	*l;
	char		*tmp;

	l = (t_lslink *)ft_memalloc(sizeof(t_lslink));
	path = ftls_get_path(path);
	ftls_get_all(path, l, f);
	if ((f->multi == 1 || f->lr == 1) && 0 != ft_strcmp(path, "./") &&
		ft_isdir(path))
	{
		tmp = ft_strsub(path, 0, (ft_strlen(path) - 1));
		if (f->flags == 1)
			ft_printf("\n");
		ft_printf("%s:\n", tmp);
		free(tmp);
	}
	if (f->f == 0 && f->d == 0)
		ftls_sort(f, &l);
	ftls_print(l, f);
	if (f->lr == 1 && f->d == 0)
		ftls_recall(path, l, f);
	ftls_link_free(&l);
}
