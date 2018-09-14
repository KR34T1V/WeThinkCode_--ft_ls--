/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_fsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:57:40 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:18:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_fsize(char *path, t_lslink *l)
{
	struct stat		st;
	char			*fre;

	if (ft_isdir(path))
	{
		stat(fre = ft_strjoin(path, l->name), &st);
		free(fre);
	}
	else if (!(ft_isdir(path)))
		stat(path, &st);
	l->fsize = st.st_size;
}
