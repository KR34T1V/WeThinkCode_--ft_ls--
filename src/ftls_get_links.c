/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_links.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:51:21 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 12:06:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_links(char *path, t_lslink *l)
{
	struct stat		st;
	
	if(ft_isdir(path))
		stat(ft_strjoin(path, l->name), &st);
	else if (!(ft_isdir(path)))
		stat(path, &st);
	l->links = st.st_nlink;
}