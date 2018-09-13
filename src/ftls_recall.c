/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_recall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:50:23 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 13:45:41 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_recall(char *path, t_lslink *l, t_lsflags *f)
{
	t_lslink *tmp;

	tmp = l;
	while (tmp)
	{
		if (ft_isdir(ft_strjoin(path, tmp->name)) &&
			(0 != ft_strcmp("..", tmp->name) &&
			0 != ft_strcmp(".", tmp->name)))
			ftls_read_dir(ft_strjoin(path, tmp->name), f);
		tmp = tmp->next;
	}
	f = NULL;
}
