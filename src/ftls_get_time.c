/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:00:24 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/10 15:19:19 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_time(t_lslink *l)
{
	struct stat		st;

	stat(l->name, &st);
	l->time = ft_strsub(ctime(&st.st_ctimespec.tv_sec), 4, 12);
}