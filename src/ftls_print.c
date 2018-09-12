/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:10:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/12 09:41:51 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_print(t_lslink *l, t_lsflags *f)
{
	/*SORT AND THEN PRINT ACCORDING TO THE FLAGS*/
	ftls_sort(f, &l);
	if (f->l == 0 && f->g == 0)
		ftls_print_none(f, l);
	else if (f->l == 1 || f->g == 1)
		ftls_print_long(f, l);
}
