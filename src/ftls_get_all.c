/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 14:44:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/10 14:54:17 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_all(char *path, t_lslink *l)
{
	ftls_get_name(path, l);
	//ftls_get_perm(l);
	//ftls_get_links(l);
	//ftls_get_owner(l);
	//ftls_get_group(l);
	//ftls_get_fsize(l);
	//ftls_get_time(l);
}
