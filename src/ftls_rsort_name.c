/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_rsort_name.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:50:22 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:47:22 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_rsort_name(t_lslink **l)
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
				if (ft_strcmp(fast->name, fast->next->name) < 0)
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
