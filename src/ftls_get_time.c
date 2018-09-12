/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_time.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:00:24 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/12 16:02:12 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	ftls_get_time(char *path, t_lslink *l)
{
	struct stat		st;
	char			*tmp;
	char			*month;
	char			*date;
	char			*tim;

	stat(ft_strjoin(path, l->name), &st);
	l->ntime = st.st_mtime;
	tmp = ft_strsub(ctime(&st.st_ctimespec.tv_sec), 4, 12);
	month = ft_strsub(tmp, 0, 3);
	date = ft_strsub(tmp, 3, 4);
	tim = ft_strsub(tmp, 6, 8);
	free(tmp);
	tmp = ft_strjoin(date, month);
	l->time = ft_strjoin(tmp, tim);
	free(tmp);
}