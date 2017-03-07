/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 21:02:02 by wfung             #+#    #+#             */
/*   Updated: 2017/03/06 20:16:46 by wfung            ###   ########.fr       */
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
		z = 0;
		while (z < store[k]->stored[k])
		{
			if (grid_range == 0)
			{
				i++;
				j = 0;
				grid_range = y;
			}
			grid_range--;
			z++;
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
		z = 0;
		while (z < store[k]->stored[k])
		{
			if (grid_range == 0)
			{
				i++;
				j = 0;
				grid_range = y;
			}
			z++;
			grid_range--;
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
	printf("start fit\n");
	while (i < grid_range)
	{
		while (j < grid_range)
		{
			if (k == 3)					//without this, k is segfaulting the entire main
				return (1);
			printf("start chk_pts k = [%i]\n", k);
			if (ft_chk_pts(grid, store, grid_range, k) == 1)
			{
				ft_place(grid, store, grid_range, k);
				x = 0;
			}
			x++;
			k++;
			j++;
		}
		i++;
		j = 0;
	}
	printf("end fit\n");
	free(grid);		//not sure if this is correct spot to free
	printf("ft_fit FAILED\n");
	return (0);
}
