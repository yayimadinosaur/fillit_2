/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 15:22:11 by wfung             #+#    #+#             */
/*   Updated: 2017/02/23 17:11:24 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		**ft_insert(t_list **grid, int n)
{
	t_list	**current;
	t_list	**head;
	t_list	**buff;
	int		i;

	i = 0;
	current = grid;
	while (i < n)
	{
		if (!(buff[i] = (t_list*)malloc(sizeof(t_list) * (1))))
			return (0);
		buff[i] = '\0';
	}
	return (head);
}

/*			ADD + MOVE DATA POINTS +1 at \n and \0
t_list		**ft_grow(t_list **grid, int n)	//pass grdi over and expand
{
	t_list	**current;		//iter thru **grid?
	t_list	**head;
	t_list	**buff;
	int		i;

	i = 0;
	head = grid;
	while (i < n
	while (grid[i] != '\0')
		i++;
	if (!(buff = (t_list**)malloc(sizeof(t_list*) * 1)))
	{
		free (buff);
		return (0);
	}
	grid[i]->data = '\n';			//sets previous data of \n to .
	grid[i]->next = buff;
	current = grid[i]->next;
	grid[i]->data = '\n';			//sets new data to \n

	return (head);
}

*/
t_list		**ft_grid(int n)		// n is passed to create size of grid
{									// n needs to be declared in main or after shape_count (figure out how to use the return value of it for n)
	t_list	**head;
	t_list	**buff;
	int		i;

	i = 0;
	if (!(buff = (t_list**)malloc(sizeof(t_list*) * (n))))
	{
		free (buff);
		return (0);
	}
	head = buff;
	while (i < n)
	{
		if (!(buff[i] = (t_list*)malloc(sizeof(t_list) * (n + 2))))
		{
			while (i > -1)
			{
				free (buff[i]);		//might need to create smaller function to norm
				i--;
			}
			return (0);
		}
		i++;
	}
	buff[i] = 0;
	return (head);
}
