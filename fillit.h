/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 18:34:45 by wfung             #+#    #+#             */
/*   Updated: 2017/02/14 20:11:29 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>		//malloc free exit 
# include <fcntl.h>			//open
# include <unistd.h>		//close write
# include <sys/uio.h>		//read

# include <stdio.h>					//remove later, for printf

typedef struct		s_list
{
	char			content;
	int				x;				//not sure if coorindate system is needed
	int				y;
	struct s_list	*next;	
}					t_list;

void		ft_putstr(char *str);
void		ft_putchar(char c);

int			ft_match1(char *str);

int			ft_shape1(char *start);
int			ft_shape2(char *start);
int			ft_shape_chk(char *start);

size_t		ft_strlen(const char *s);

int			ft_strncmp(const char *s1, const char *s2, size_t n);

int			ft_matchx(char *str);

int			ft_chk_input(char *str);
int			ft_chk_char(char *str);
int			ft_chk_count(char *str, int i, int j, int k);

char		*ft_shape_letter(char *str, int n);

int			ft_count_shapes(char *str);
#endif

//CANNOT USE NULL
