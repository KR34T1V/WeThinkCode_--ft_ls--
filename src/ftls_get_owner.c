/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_owner.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:52:38 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/10 15:18:39 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_owner(t_lslink *l)
{
	struct stat		st;
	struct passwd	*pw = NULL;
	
	stat(l->name, &st);
	pw = getpwuid(st.st_uid);
	l->owner = pw->pw_name;
}