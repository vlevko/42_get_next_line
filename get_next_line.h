/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlevko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 15:00:05 by vlevko            #+#    #+#             */
/*   Updated: 2018/01/28 15:03:03 by vlevko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/includes/libft.h"
# define BUFF_SIZE 4096

typedef struct		s_glist
{
	int				fd;
	char			*buff;
	char			*res;
	char			*str;	
	struct s_glist	*next;
}					t_glist;

int					get_next_line(const int fd, char **line);

#endif
