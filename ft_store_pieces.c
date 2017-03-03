/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_pieces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 17:16:37 by wfung             #+#    #+#             */
/*   Updated: 2017/03/02 21:30:14 by wfung            ###   ########.fr       */
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
	int				a;				//piece 1;
	int				b;				//piece 2;
	int				c;				//piece 3;
	int				d;				//piece 4;		//notsure if needed
	struct	s_list	*next;
}					t_store;

t_store		**ft_store_auto(t_store **store, int shape_count, char *str)
{
	int		i;
	int		j;
	int		k;
	int		x;

	i = 0;				//counter for shapes vs shape_count and store[index]
	j = 0;
	k = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			if (j == 0)
				k = i;
			store[x]->(x + 48) = i - k;		//if p[j] doesn't work, create **p in struct w/ 4 *int
			if (j == 3)
			{
				j = 0;
				x++;
			}
			j++;
		}
		i++;
	}
	return (store);
}

t_store		**ft_stored_parts(t_store **store, t_store *store[i], int n, int count)		//return after parsing
{
	if (n == 1)							// n = shape #		>>>>store[i]->shape
	{
		store[i]->p1 == 1;
		store[i]->p2 == 2;
		store[i]->p3 == 3;
	}
	if (n == 2)
	{
		store[i]->p1 == 5;
		store[i]->p2 == 10;
		store[i]->p3 == 15;
	}
	if (n == 3)
	{
		store[i]->p1 == 1;
		store[i]->p2 == 5;
		store[i]->p3 == 6;
	}
	if (n == 4)
	{
		store[i]->p1 == 1;
		store[i]->p2 == 2;
		store[i]->p3 == 6;
	}
	if (n == 5)
	{
		store[i]->p1 == 5;
		store[i]->p2 == 6;
		store[i]->p3 == 10;
	}
	if (n == 6)
	{
		store[i]->p1 == 4;
		store[i]->p2 == 5;
		store[i]->p3 == 10;
	}
	if (n == 7)
	{
		store[i]->p1 == 4;
		store[i]->p2 == 5;
		store[i]->p3 == 6;
	}
	if (n == 8)
	{
		store[i]->p1 == 1;
		store[i]->p2 == 6;
		store[i]->p3 == 7;
	}
	if (n == 9)
	{
		store[i]->p1 == 4;
		store[i]->p2 == 5;
		store[i]->p3 == 9;
	}
	if (n == 10)
	{
		store[i]->p1 == 1;
		store[i]->p2 == 4;
		store[i]->p3 == 5;
	}
	if (n == 11)
	{
		store[i]->p1 == 5;
		store[i]->p2 == 6;
		store[i]->p3 == 11;
	}
	if (n == 12)
	{
		store[i]->p1 == 5;
		store[i]->p2 == 10;
		store[i]->p3 == 11;
	}
	if (n == 13)
	{
		store[i]->p1 == 3;
		store[i]->p2 == 4;
		store[i]->p3 == 5;
	}
	if (n == 14)
	{
		store[i]->p1 == 1;
		store[i]->p2 == 6;
		store[i]->p3 == 11;
	}
	if (n == 15)
	{
		store[i]->p1 == 1;
		store[i]->p2 == 2;
		store[i]->p3 == 5;
	}
	if (n == 16)
	{
		store[i]->p1 == 5;
		store[i]->p2 == 9;
		store[i]->p3 == 10;
	}
	if (n == 17)
	{
		store[i]->p1 == 5;
		store[i]->p2 == 6;
		store[i]->p3 == 7;
	}
	if (n == 18)
	{
		store[i]->p1 == 1;
		store[i]->p2 == 5;
		store[i]->p3 == 10;
	}
	if (n == 19)
	{
		store[i]->p1 == 1;
		store[i]->p2 == 2;
		store[i]->p3 == 7;
	}
	count--;
	if (count > 0)
		ft_store_parts(store, store[i + 1], count);
	return (store);
}

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
