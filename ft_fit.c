/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 21:02:02 by wfung             #+#    #+#             */
/*   Updated: 2017/03/05 21:55:37 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**ft_chk_pts(t_grid **grid, t_store **store, int n)
{
	int		i;		//counter for grid i
	int		j;		//counter for grid j
	int		k;		//counter for stored array
	int		x;

	i = 0;
	j = 0;
	k = 0;
	while (store[i]->stored[j] != 0)
	{
		if (grid[i][j].content + store[i]->stored[j] == '.')
		{
			//TIP : add decreminator value X = stored[i]->stored[j];
			//	while j < n (if it is equal; means its out of bounds, move to next row
			//	i++;
			//	while i < n (if it is equal; means out of row bounds, return 0
			j++;
		}
		else
		{
			printf("chk_pts FAILED\n");
			return (0);
		}
	}
	return (1);
}

int		**ft_fit(t_grid **grid, t_store **store, int n)
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
			if (ft_chk_pts(grid, store, n) == 1)
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
