/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 21:02:02 by wfung             #+#    #+#             */
/*   Updated: 2017/03/06 18:24:22 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_chk_pts(t_grid **grid, t_store **store, int grid_range, int k)	//k == stored array index	
{
	int		i;		//x position of grid
	int		j;		//y position of grid
	int		x;		//counter for shape piece 1-4
	int		y;		//grid counter
	int		z;		//counter for distance of stored[k]->store[x]

	i = 0;
	j = 0;
	x = 0;
	y = 0;
	while (stored[k]->store[x] != 0)		//or while (x < 4) because store[x] is always 0
	{
		z = 0;
		while (stored[k]->stored[x] > 0)
		{

			z++;
		}
		if (grid[i][j].content != '.' && grid[i][j].marked != 'y')
			return (0);
		x++;
	}
	return (1);
}

			//TIP : add decreminator value X = stored[i]->stored[j];
			//	while j < n (if it is equal; means its out of bounds, move to next row
			//	i++;
			//	while i < n (if it is equal; means out of row bounds, return 0

int		**ft_fit(t_grid **grid, t_store **store, int grid_range)
{
	int		i;
	int		j;
	int		k;		//counter for store array
	int		x;

	i = 0;
	j = 0;
	k = 0;
	x = 0;
	while (grid[i]!= 0)
	{
		while (grid[i][j] != 0)
		{
			if (ft_chk_pts(grid, store, n, k) == 1)
			{
				while (store[k]->stored[x] != 0)
				{
					grid[i][j].content + store[k]->stored[x] = k + 65;	//need to write a function that checked grid location
					x++;
				}
				x = 0;
				store[k]->marked = y;
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("ft_fit FAILED\n");
	return (0);
}
