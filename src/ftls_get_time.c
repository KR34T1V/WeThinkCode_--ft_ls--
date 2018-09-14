/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:00:24 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:24:25 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_time(char *path, t_lslink *l)
{
	struct stat		st;
	char			*tmp;
	char			*fre;
	char			*fre2;
	char			*fre3;

	if (ft_isdir(path))
	{
		stat(fre = ft_strjoin(path, l->name), &st);
		free(fre);
	}
	else if (!(ft_isdir(path)))
		stat(path, &st);
	l->ntime = st.st_mtime;
	tmp = ft_strsub(ctime(&st.st_ctimespec.tv_sec), 4, 12);
	fre = ft_strsub(tmp, 0, 3);
	fre2 = ft_strsub(tmp, 3, 4);
	fre3 = ft_strjoin(fre2, fre);
	free(fre);
	free(fre2);
	fre = ft_strsub(tmp, 6, 8);
	free(tmp);
	l->time = ft_strjoin(fre3, fre);
	free(fre3);
	free(fre);
}
