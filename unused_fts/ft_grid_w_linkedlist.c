/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 17:27:01 by wfung             #+#    #+#             */
/*   Updated: 2017/02/17 19:12:34 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
 * t_list	*ft_fill_map(t_list *base, char *str, int n)//str = perfect str n = # of shapes
{
	int	i;	//shape counter

	i =  0;	//until i is less than n - 1, see if shape fits, if not, grow map
	//	>>>need a scan map function<<< to scan for locations for empty space for shape
}

t_list	*ft_grow_map(t_list *map, int n)
{
	int		i;
	int		j;
	t_list	*head;
	t_list	*buff;

	i = 0;
	j = n + (n * 2);
	if (!(buff = (*t_list)malloc(sizeof(t_list) * (n * 2))))
		return (0);
	head = buff;
	while (map != '\0')
		map = map->next;
	map->next = buff;
	while (buff != '\0')
		buff = buff->next;
	while (buff[i] != '\0' && i < j)	//i counter eliminates \0
	{
		if (i % (n + 1) == 0)
			buff[i]->data = '\n';
		else
			buff[i]->data = '.';
		buff[i] = buff[i]->next;
		i++;
	}
	return (head);
}

t_list	*ft_build_base(int n)	//str = perfect str n = # of shapes/size?
{
	int	i;	//counter for base # for square
	int	j;	//counter for each t_list + formula

	t_list	**head;		//head for list
	t_list	**buff;		//make list
	
	i = 0;
	j = n + 1;	//i^2 = space for chars, i = \n, 1 = null
	if (!(buff = (**t_list)malloc(sizeof(*t_list) * j)))
		return (0);		//>>>test if return 0 is correct if malloc fails<<<
	buff[j] = '\0';
	head = buff;
	while (buff[i] != '\0' && i < j)	//i counter eliminates \0
	{
		if (i % (n + 1) == 0)
			buff[i]->data = '\n';
		else
			buff[i]->data = '.';
		buff[i] = buff[i]->next;
		i++;
	}
	return (head);
}

	//start off at a 2x2 square; total = 2^2 + 2 + 1 => 7
*/

/*
t_list	**ft_grid_base(void)
{
	t_list	**head;
	t_list	**buff;
	int		i;
	int		n;

	i = 0;
	n = 2;
	if (!(buff = (t_list**)malloc(sizeof(t_list*) * (n + 1))))
	{
		free(buff);
		return (0);		//do we need error msg if fail?? <<<<<
	}
	head = buff;
	while (i < n)
	{
		if (!(buff[i] = (t_list*)malloc(sizeof(t_list) * (n))))
		{
			free(buff[i]);
			return (0);	//do we need error msg if fail?? <<<<<
		}
		i++; 
	}
	buff[i] = 0;
	return (head);
}

void	ft_print_list(t_list **list_grid, int size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (list_grid[i] != 0)
	{
		while (list_grid[i][j] != '\0')
		{
			list_grid[i][j]->content = '.';
			printf("[%c]", list_grid[i][j]->content);
			if (list_grid[i][j]->content == 0)
				printf("\n");
			j++;
		}
		i++;
		j = 0;
	}
	return ;
}

int		main(void)
{
	int		n;

	n = 2;
	ft_print_list(ft_grid_base(), n);
	printf("\nfinished printing grid\n");
	return (0);
}

*/

int		main(void)
{
	t_list	**buff;
	int		i;
	int		j;
	int		n;
	char	*y;

	i = 0;
	j = 0;
	n = 2;
	y = ".";
	if (!(buff = (t_list**)malloc(sizeof(t_list*) * (n + 1))))
		return (0);
	while (i < n + 2)
	{
		ft_lstadd(buff, ft_lstnew((const void*)y, 1));
		i++;
	}
	i = 0;
	while (i < n + 2)
	{
		while (j < n + 1)
		{
			printf("[%i]", buff[i][j].content);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
