/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_name.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:23:52 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 10:22:35 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_name(t_lslink *l, struct dirent *ent)
{
	t_lslink	*tmp;

	tmp = l;
	tmp->name = ft_strdup(ent->d_name);
	tmp->namelen = ft_strlen(tmp->name);
}