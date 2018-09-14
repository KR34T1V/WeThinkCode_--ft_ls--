/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:39:12 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/14 07:37:02 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

static void	ftls_choose(int ac, char **av, int i, t_lsflags *f)
{
	while (i < ac)
	{
		if (i == 1 && av[i] && av[i][0] == '-')
		{
			ftls_flag_set(av[i], f);
			if (ac == 2)
				ftls_read_dir("./", f);
		}
		else if (av[i] && av[i][0] != '-')
		{
			if ((ac > 2 && f->flags == 0) || (f->flags == 1 && ac > 3))
				f->multi = 1;
			ftls_read_dir(av[i], f);
		}
		i++;
	}
}

int			main(int ac, char **av)
{
	int			i;
	t_lsflags	f;

	i = 1;
	ftls_flag_rset(&f);
	if (ac == 1)
		ftls_read_dir("./", &f);
	else if (ac != 1)
		ftls_choose(ac, av, i, &f);
	else
		ft_quit("ERROR: No such file or directory!");
	return (0);
}
