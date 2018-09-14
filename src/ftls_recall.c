/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_recall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:50:23 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 09:08:00 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_recall(char *path, t_lslink *l, t_lsflags *f)
{
	t_lslink	*tmp;
	char		*fre;

	tmp = l;
	while (tmp)
	{
		if (ft_isdir(fre = ft_strjoin(path, tmp->name)) &&
			(f->a == 0) && tmp->name[0] != '.')
			ftls_read_dir(fre, f);
		else if (ft_isdir(fre = ft_strjoin(path, tmp->name)) &&
			f->a ==1 && (0 != ft_strcmp("..", tmp->name) &&
			0 != ft_strcmp(".", tmp->name)))
			ftls_read_dir(fre, f);
		tmp = tmp->next;
		free(fre);
	}
}
