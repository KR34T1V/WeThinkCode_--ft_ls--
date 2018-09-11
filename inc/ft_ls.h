/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:32:28 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 11:28:08 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# define LSVALID "-Ralrtufgd"

# include "ft_struct.h"
# include "../lib/ft_printf/inc/ft_printf.h"
# include <dirent.h>
# include <grp.h>
# include <pwd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <uuid/uuid.h>

int		ft_isdir(const char *path);
int		ft_isreg(const char *path);
void	ftls_flag_none(const char *path, t_lsflags *f, t_lslink *l);
void	ftls_flag_rset(t_lsflags *f);
void	ftls_flag_set();
void	ftls_get_all(char *path, t_lslink *l);
void	ftls_get_block(t_lslink *l);
void	ftls_get_name(char *path, t_lslink *l);
void	ftls_get_perm(t_lslink *l);
void	ftls_get_links(t_lslink *l);
void	ftls_get_owner(t_lslink *l);
void	ftls_get_group(t_lslink *l);
void	ftls_get_fsize(t_lslink *l);
void	ftls_get_time(t_lslink *l);
void	ftls_read_dir();
void	ftls_print(t_lslink *l, t_lsflags *f);
void	ftls_print_none(t_lsflags *f, t_lslink *l);
void	ftls_print_hidden(t_lsflags *f, t_lslink *l);
void	ftls_print_long(t_lsflags *f, t_lslink *l);
void	ftls_print_lhidden(t_lsflags *f, t_lslink *l);
void	ftls_print_direct(t_lsflags *f, t_lslink *l);
void	ftls_print_ldirect(t_lsflags *f, t_lslink *l);

#endif