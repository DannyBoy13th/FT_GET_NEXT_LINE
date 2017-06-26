/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoloshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 15:23:53 by dsoloshe          #+#    #+#             */
/*   Updated: 2017/04/20 18:13:27 by dsoloshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "string.h"
# include "stdlib.h"
# include "unistd.h"
# include "fcntl.h"
# include "sys/types.h"
# include "sys/stat.h"
# include "libft/libft.h"

# define BUFF_SIZE 50000
# define MAX_FD 4000

int				get_next_line(int const fd, char **line);

typedef struct	s_lines
{
	char	*cont[MAX_FD];
	char	*endl_loc;
}				t_lines;

#endif
