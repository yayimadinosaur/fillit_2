/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 15:22:11 by wfung             #+#    #+#             */
/*   Updated: 2017/02/21 20:11:01 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		**ft_grow(t_list **grid, int n)	//pass grdi over and expand
{
	t_list	**current;		//iter thru **grid?
	t_list	**head;
	t_list	**buff;
	int		i;

	i = 0;
	head = grid;
	while (grid[i] != '\0')
		i++;
	if (!(buff = (t_list**)malloc(sizeof(t_list*) * 1)))
	{
		free (buff);
		return (0);
	}
	grid[i] = buff;

	return (head);
}

t_list		**ft_grid(int n)		// n is passed to create size of grid
{									// n needs to be declared in main or after shape_count (figure out how to use the return value of it for n)
	t_list	**head;
	t_list	**buff;
	int		i;

	i = 0;
	if (!(buff = (t_list**)malloc(sizeof(t_list*) * n)))
	{
		free (buff);
		return (0);
	}
	head = buff;
	while (i < n)
	{
		if (!(buff[i] = (t_list*)malloc(sizeof(t_list) * n)))
		{
			while (i > 0)
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
