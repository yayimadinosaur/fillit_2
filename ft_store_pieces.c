/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_pieces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 17:16:37 by wfung             #+#    #+#             */
/*   Updated: 2017/02/26 21:10:03 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_shape_chk(char *x);

typedef struct		s_store
{
	int				shape;
	char			alpha;
	struct	s_list	*next;
}					t_store;

void		ft_print_store(t_store **store_pieces)
{
	int		i;

	i = 0;
	printf("start print\n");
	while (store_pieces[i] != 0)
	{
		printf("[i] [%c] [%i]\n", store_pieces[i].alpha, store_pieces[i].shape);
		i++;
	}
}

t_store		**ft_store1(char *str, t_store **store_pieces)
{
	int		i;		//shape counter
	int		j;		//counter for #
	char	*c;		//match value

	i = 0;
	j = 0;
	c = str;
	while (*str)
	{
		if (*str == '#')
		{
			if (j == 0)
				c = str;
			j++;
		}
		if (j == 4)
		{
			store_pieces[i].shape = ft_shape_chk(c);
			j = 0;
			i++;
		}
		str++;
	}
	printf("store 1 finished str\n");
	return (store_pieces);
}

t_store		**ft_store_pieces(char *str, int shape_count)
{
	t_store	**store;
	t_store	**head;
	int		i;
	char	c;

	i = 0;
	c = 'A';
	if (shape_count > 0)
	{		//if more than 0 shapes, create storage
		if (!(store = (t_store**)malloc(sizeof(t_store*) * (shape_count + 1))))
			return (0);										//count + 1 for null
	}
	if (shape_count == 0)
		return (0);			//if no shapes, fail
	store[shape_count + 1] = 0;
	head = store;
	ft_store1(str, store);
	while (i < shape_count)
	{
		printf("store[i] going i = %i\n", i);
		store[i].alpha = c;	//stores alphabet respective to index;
		i++;
		c++;
	}
	store[i] = 0;
	printf("finished store_pieces\n");
	return (head);
}

int		main(void)
{
	char *str =
					"....\n"
					"....\n"
					"....\n"
					"....\n";

	ft_print_store(ft_store_pieces(str, 1));
	return (0);
}