/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_pieces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 17:16:37 by wfung             #+#    #+#             */
/*   Updated: 2017/03/05 15:59:48 by wfung            ###   ########.fr       */
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
	int				*stored;
//	struct	s_list	*next;
}					t_store;

/*	char *str =
					"####\n"			//k = 1
					"....\n"
					"....\n"
					"....\n"
					"\n"
					"#...\n"			//k = 22
					"###.\n"
					"....\n"
					"....\n"
					"\n"
					"##..\n"			//k = 43
					".#..\n"
					".#..\n"
					"....\n";
					*/
/*
t_store		**ft_store_fix(t_store **store)
{

}
*/

// DANNY USE THIS 2/3
t_store		**ft_store_auto(t_store **store, char *str)
{
	int		i;
	int		j;
	int		k;
	int		x;

	i = 0;
	j = 0;
	k = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
		{
			store[x]->stored[j] = i - k;
			printf("[j] = %i [k] = %i [i] = %i result = [%i]\n", j, k, i, i - k);
			j++;
		}
		if (j == 4)
		{
			j = 0;
			x++;
		}
		if (j == 0)
			k = i + 1;
		i++;
	}
	return (store);
}

//TEST FUNCTION --->>> CREATE STORAGE BASED ON SHAPE_COUNT
//DANNY USE THIS 1/3
t_store		**ft_create_store(char *str, int shape_count)
{
	int		i;
	int		j;
	t_store	**store;
	t_store	**head;

	i = 0;
	j = 0;
	printf("create_store start\nshape_count = [%i]\n", shape_count);
	if (shape_count > 0)
	{
		if (!(store = (t_store**)malloc(sizeof(t_store*) * (shape_count + 1))))
			return (0);
	}
	if (shape_count == 0)
		return (0);
	store[shape_count + 1] = 0;
	head = store;
	printf("head store\n");
	while (i < shape_count + 1)
	{
		printf("store[i] going i = %i\n", i);
		if (!(store[i] = (t_store*)malloc(sizeof(t_store) * (1))))
			return (0);
		if (!(store[i]->stored = (int*)malloc(sizeof(int) * (5))))
			return (0);
		i++;
	}
	printf("testman\n");
	ft_store_auto(head, str);
	printf("create_store end\n");
	return (head);	
}

//DANNY USE THIS 3/3
void		ft_print_store(t_store **store)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	printf("start print\n");
	while (store[i] != 0)
	{
		while (j < 5)
		{
		//	store[i]->stored[j] - ft_shape_count(str))
			printf("shape [%i], hash # [%i], value [%i]\n", i, j, store[i]->stored[j]);
			j++;
		}
		//printf("[%i] [%c] [%i]\n", i, store_pieces[i]->alpha, store_pieces[i]->shape);
		//printf("printing each # [%i] [%i]\n", i, store_pieces[i]->stored[i]);
		i++;
		j = 0;
	}
	if (store[i] == 0)
		printf("shape [%i] [\\0]\n", i);
	return ;
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
					"##..\n"
					".#..\n"
					".#..\n"
					"....\n";

//	ft_print_store(ft_store_pieces(str, ft_count_shapes(str)));	//print out stored pieces in struct array
//	ft_store_shapes(ft_store_pieces(str, ft_count_shapes(str)), str, ft_count_shapes(str));	//testing stored shapes
	ft_print_store(ft_create_store(str, ft_count_shapes(str)));
	return (0);
}

//TRY 2		--ONLY STORES shape1 + shape2 int values
/*
t_store		**ft_store_shapes(t_store **store, char *str, int shape_count)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(store[i]->stored = (int*)malloc(sizeof(int) * (shape_count + 1))))
		return (0);
	while (i < shape_count + 1)
	{
		if (i == 0)
			j = 0;
		else 
			j = i * 21;			//this only works if its exactly at first #
		store[0]->stored[i] = ft_shape1(str + j) + ft_shape2(str + j);
		printf("test test [%i] [value = %i]\n", i, store[0]->stored[i]);
		i++;
	}
	printf("{{%i}} item = %i\n", j, store[0]->stored[j]);
	//store[i]->stored[i] = '\0';
	return (store);
}
*/

//TRY 1		--ONLY STORES shape1 + shape2 return
/*
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

//TRY 0
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
*/

/*
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
					"##..\n"
					".#..\n"
					".#..\n"
					"....\n";

//	ft_print_store(ft_store_pieces(str, ft_count_shapes(str)));	//print out stored pieces in struct array
//	ft_store_shapes(ft_store_pieces(str, ft_count_shapes(str)), str, ft_count_shapes(str));	//testing stored shapes
	ft_store_auto(, str);
	return (0);
}
*/
