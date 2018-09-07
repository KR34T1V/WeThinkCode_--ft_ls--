/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftls_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:39:12 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 10:08:35 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

int		main(int ac, char **av)
{
	int 		i;
	t_lslink	*l = NULL;

	i = 1;
	if (ac == 1)
		ftls_flag_none(".", l);
	else while (i < ac)
	{
		if (av[i] && av[i][0] == '-')
			i = 0;//ftls_flag_set();
		else if (av[i] && ft_isdir(av[i]))
			i = 0; //ftls_read_dir();
		else
			ft_quit("ERROR: File not found!");
	}
}