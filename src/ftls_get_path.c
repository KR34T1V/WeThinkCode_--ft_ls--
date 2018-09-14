/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_get_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:27:11 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:22:30 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

char	*ftls_get_path(char *path)
{
	int		i;

	i = ft_strlen(path);
	if (ft_isdir(path))
	{
		if (path[i - 1] != '/')
			path = ft_strjoin(path, "/");
	}
	else
		path = ft_strdup(path);
	return (path);
}
