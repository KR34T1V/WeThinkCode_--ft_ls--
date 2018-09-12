/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_block.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:48:35 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/12 16:21:04 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_block(char *path, t_lslink *l)
{
	struct stat		st;
	
	stat(ft_strjoin(path, l->name), &st);
	l->block = st.st_blocks;
}