/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:44:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/12 16:23:56 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_all(char *path, t_lslink *l)
{
	t_lslink *tmp;

	tmp = l;
	ftls_get_name(path, l);
	while (tmp->next)
	{
		ftls_get_perm(path, tmp);
		ftls_get_links(path, tmp);
		ftls_get_owner(path, tmp);
		ftls_get_group(path, tmp);
		ftls_get_fsize(path, tmp);
		ftls_get_time(path, tmp);
		ftls_get_block(path, tmp);
		tmp = tmp->next;
	}
}
