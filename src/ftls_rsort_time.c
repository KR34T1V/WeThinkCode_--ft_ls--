/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_rsort_time.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 10:45:15 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:48:42 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_rsort_time(t_lslink **l)
{
	t_lslink	*slow;
	t_lslink	*fast;
	int			swap;

	swap = 1;
	while (swap == 1)
	{
		swap = 0;
		slow = *l;
		while (slow && slow->next)
		{
			fast = slow;
			while (fast && fast->next)
			{
				if (fast->ntime > fast->next->ntime)
				{
					ftls_sort_switch(l, fast);
					swap = 1;
				}
				fast = fast->next;
			}
			slow = slow->next;
		}
	}
}
