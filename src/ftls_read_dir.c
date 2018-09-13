/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_read_dir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 09:58:51 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 10:43:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_read_dir(char *path, t_lslink **l, t_lsflags *f)
{
	char	*tmp;

	*l = (t_lslink *)ft_memalloc(sizeof(t_lslink));
	if (ft_isdir(path))
		ftls_get_all(path, *l);
	if (f->multi == 1)
	{
		ft_printf("\n%s:\n",(tmp = ft_strsub(path,0,(ft_strlen(path) - 1))));
		free(tmp);
	}
	ftls_print(*l, f);
	//ftls_link_free();
}