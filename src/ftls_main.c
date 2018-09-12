/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:39:12 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/12 16:00:48 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

int		main(int ac, char **av)
{
	int 		i;
	int			arg;
	t_lslink	*l = NULL;
	t_lsflags	f;
	char		*path;

	i = 1;
	arg = 0;
	l = (t_lslink *)ft_memalloc(sizeof(t_lslink));
	ftls_flag_rset(&f);
	if (ac == 1)
		ftls_get_name("./", l);
	else while (i < ac)
	{
		if (i == 1 && av[i] && av[i][0] == '-')
		{
			ftls_flag_set(av[i], &f);
			if (ac == 2)
				ftls_get_all("./", l);
		}
		else if (av[i] && ft_isdir(ft_strjoin("./", av[i])))
		{
			//ft_printf("%s\n", ft_strjoin("./", av[i]));
			path = ftls_get_path(av[i]);
			ftls_get_all(path, l);
		}
		else
			ft_quit("ERROR: No such file or directory!");
		i++;
	}
	ftls_print(l, &f);
}