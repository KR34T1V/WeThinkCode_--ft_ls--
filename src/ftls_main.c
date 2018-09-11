/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:39:12 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 13:43:36 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

int		main(int ac, char **av)
{
	int 		i;
	int			arg;
	t_lslink	*l = NULL;
	t_lsflags	f;

	i = 1;
	arg = 0;
	l = (t_lslink *)ft_memalloc(sizeof(t_lslink));
	ftls_flag_rset(&f);
	if (ac == 1)
		ftls_get_name(".", l);
	else while (i < ac)
	{
		if (av[i] && av[i][0] == '-')
		{
			ftls_flag_set(av[i], &f);
			if (i == ac - 1 && (f.l == 1 || f.g == 1))
				ftls_get_all(".", l);
			else
				ftls_get_name(".", l);
		}
		else if (av[i] && ft_isdir(av[i]))
			ft_quit("ERROR: File not found!"); //ftls_read_dir(); arg = 1;
		else
			ft_quit("ERROR: No such file or directory!");
		i++;
	}
	ftls_print(l, &f);
}