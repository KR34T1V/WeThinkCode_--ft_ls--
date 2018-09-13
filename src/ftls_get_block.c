/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:48:35 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 12:05:48 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_block(char *path, t_lslink *l)
{
	struct stat		st;

	if (ft_isdir(path))
		stat(ft_strjoin(path, l->name), &st);
	else if (!(ft_isdir(path)))
		stat(path, &st);
	l->block = st.st_blocks;
}
