/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_sort_name.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:50:22 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 15:21:31 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_sort_name(/*t_lsflags *f, */t_lslink *l)
{
	t_lslink	*tmp;
	t_lslink	*slow;
	t_lslink	*fast;

	slow = l;
	while (slow && slow->next)
	{
		fast = slow;
		while (fast->name && fast->next->name)
		{
			if (ft_strcmp(fast->name, fast->next->name) > 0)
			{
				tmp = fast->next->next;
				fast->next->next = fast;
				fast->prev->next = fast->next;
				fast->prev = fast->next;
				fast->next = tmp;
			}
			fast = fast->next;
		}
		slow = slow->next;
	}
}