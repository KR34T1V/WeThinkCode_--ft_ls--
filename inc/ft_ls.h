/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:32:28 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 10:41:34 by cterblan         ###   ########.fr       */
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

int			ft_isdir(const char *path);
int			ft_isreg(const char *path);
void		ftls_read_dir(char *path, t_lslink **l, t_lsflags *f);
void		ftls_flag_none(const char *path, t_lsflags *f, t_lslink *l);
void		ftls_flag_rset(t_lsflags *f);
void		ftls_flag_set();
t_lslink	*ftls_link_add(t_lslink *l);
void		ftls_get_all(char *path, t_lslink *l);
void		ftls_get_block(char *path, t_lslink *l);
int 		ftls_get_blocktotal(t_lslink *l, t_lsflags *f);
void		ftls_get_name(t_lslink *l, struct dirent *ent);
char		*ftls_get_path(char *path);
void		ftls_get_perm(char *path, t_lslink *l);
void		ftls_get_links(char *path, t_lslink *l);
void		ftls_get_owner(char *path, t_lslink *l);
void		ftls_get_group(char *path, t_lslink *l);
void		ftls_get_fsize(char *path, t_lslink *l);
void		ftls_get_time(char *path, t_lslink *l);
void		ftls_sort(t_lsflags *f, t_lslink **l);
void    	ftls_sort_switch(t_lslink **head, t_lslink *node);
void		ftls_sort_name(t_lslink **l);
void		ftls_rsort_name(t_lslink **l);
void		ftls_sort_time(t_lslink **l);
void		ftls_rsort_time(t_lslink **l);
void		ftls_print(t_lslink *l, t_lsflags *f);
void		ftls_print_none(t_lsflags *f, t_lslink *l);
void		ftls_print_hidden(t_lsflags *f, t_lslink *l);
void		ftls_print_long(t_lsflags *f, t_lslink *l);
void		ftls_print_lhidden(t_lsflags *f, t_lslink *l);

#endif