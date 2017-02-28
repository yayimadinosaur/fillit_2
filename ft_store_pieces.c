/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_pieces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 17:16:37 by wfung             #+#    #+#             */
/*   Updated: 2017/02/27 18:54:09 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_shape_chk(char *x);
int		ft_count_shapes(char *str);
int		ft_shape1(char *x);
int		ft_shape2(char *x);

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
		printf("[i] [%c] [%i]\n", store_pieces[i]->alpha, store_pieces[i]->shape);
		i++;
	}
	printf("[%i] \\0\n", i);
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
			store_pieces[i]->shape = ft_shape1(c) + ft_shape2(c);
			printf("store1 test [%i] [%i]\n", i, store_pieces[i]->shape);
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
	while (i < shape_count)
	{
		printf("store[i] going i = %i\n", i);
		if (!(store[i] = (t_store*)malloc(sizeof(t_store) * (1))))
			return (0);
		store[i]->alpha = c;	//stores alphabet respective to index;
		i++;
		c++;
	}
	store[i] = 0;
	printf("finished store_pieces\n");
	ft_store1(str, store);
	return (head);
}

int		main(void)
{
	char *str =
					"####\n"
					"....\n"
					"....\n"
					"....\n"
					"\n"
					"#...\n"
					"###.\n"
					"....\n"
					"....\n"
					"\n"
					"....\n"
					".#..\n"
					".##.\n"
					"..#.\n";

	ft_print_store(ft_store_pieces(str, ft_count_shapes(str)));	//print out stored pieces in struct array
	return (0);
}
