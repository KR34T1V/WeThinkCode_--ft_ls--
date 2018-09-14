/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:25:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:48:50 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_sort(t_lsflags *f, t_lslink **l)
{
	if (f->r == 0)
		ftls_sort_name(l);
	if (f->r == 1)
		ftls_rsort_name(l);
	if (f->r == 0 && f->t == 1)
		ftls_sort_time(l);
	else if (f->r == 1 && f->t == 1)
		ftls_rsort_time(l);
}
