/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:33:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/07 11:19:43 by cterblan         ###   ########.fr       */
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
	char			*name;
	char			*perm;
	int				links;
	char			*owner;
	char			*group;
	int				fsize;
	char			*time;
	struct s_lslink	*next;
}					t_lslink;

#endif