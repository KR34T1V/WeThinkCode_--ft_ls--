/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:33:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/11 15:14:48 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H


typedef struct		s_lsflags
{
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
	struct s_lslink	*next;
	struct s_lslink *prev;
}					t_lslink;

#endif