/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:33:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/13 10:30:33 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H


typedef struct		s_lsflags
{
	int				multi;
	int				R;
	int				a;
	int				l;
	int				r;
	int				t;
	int				u;
	int				f;
	int				g;
	int				d;
}					t_lsflags;

typedef struct		s_lslink
{
	int				block;
	char			*name;
	int				namelen;
	char			*perm;
	int				links;
	char			*owner;
	char			*group;
	int				fsize;
	char			*time;
	unsigned int	ntime;
	struct s_lslink	*next;
	struct s_lslink *prev;
}					t_lslink;

#endif