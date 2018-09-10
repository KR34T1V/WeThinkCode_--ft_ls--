/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:44:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/10 15:21:43 by cterblan         ###   ########.fr       */
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
		ftls_get_perm(tmp);
		ftls_get_links(tmp);
		ftls_get_owner(tmp);
		ftls_get_group(tmp);
		ftls_get_fsize(tmp);
		ftls_get_time(tmp);
		tmp = tmp->next;
	}
}
