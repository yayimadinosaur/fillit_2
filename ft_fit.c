/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 21:02:02 by wfung             #+#    #+#             */
/*   Updated: 2017/03/06 19:30:23 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_place(t_grid **grid, t_store **store, int grid_range, int k)
{
	int		i;		//x position of grid
	int		j;		//y position of grid
	int		x;		//counter for shape piece 1-4
	int		y;		//grid counter
	int		z;		//counter for distance of stored[k]->store[x]

	i = 0;
	j = 0;
	x = 0;
	y = grid_range;
	while (store[k]->stored[x] != 0)		//or while (x < 4) because store[x] is always 0
	{
		z = -1;
		while (z < store[k]->stored[k] && grid_range-- && z++)
		{
			if (grid_range == -1)
			{
				i++;
				j = 0;
				grid_range = y + 1;
			}
		}
		grid[i][j].content = k + 65;
	}
	return (1);
}

int		ft_chk_pts(t_grid **grid, t_store **store, int grid_range, int k)	//k == stored array index	
{
	int		i;		//x position of grid
	int		j;		//y position of grid
	int		x;		//counter for shape piece 1-4
	int		y;		//grid counter
	int		z;		//counter for distance of stored[k]->store[x]

	i = 0;
	j = 0;
	x = 0;
	y = grid_range;
	while (store[k]->stored[x] != 0)		//or while (x < 4) because store[x] is always 0
	{
		z = -1;
		while (z < store[k]->stored[k] && grid_range-- && z++)
		{
			if (grid_range == -1)
			{
				i++;
				j = 0;
				grid_range = y + 1;
			}
		}
		if (grid[i][j].content == '.' && store[k]->marked != 'y')
		   	x++;
		else
			return (0);
	}
	return (1);
}

int		ft_fit(t_grid **grid, t_store **store, int grid_range)
{
	int		i;
	int		j;
	int		k;		//counter for store array
	int		x;

	i = 0;
	j = 0;
	k = 0;
	x = 0;
	while (i < grid_range)
	{
		while (j < grid_range)
		{
			if (ft_chk_pts(grid, store, grid_range, k) == 1)
			{
				ft_place(grid, store, grid_range, k);
				x = 0;
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("ft_fit FAILED\n");
	return (0);
}
