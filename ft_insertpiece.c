/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertpiece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 20:07:18 by wfung             #+#    #+#             */
/*   Updated: 2017/02/26 17:44:57 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


int		ft_chk_point(t_list **grid, t_list **point_grid, t_list **stored_shapes)
{
									//checks grid[i][j] if clear for each piece of shape
}

int		ft_chk_grid(t_list **grid, int shape)
{
	char	y;
	int		i;						//checks grid coor for sections of piece

	y = '.';						//blank grid piece
	i = 0;
	while (grid[i] != 0)
	{
		while (grid[i][j] != 0)
		{
			if (grid[i][j].content != y)
			{
				if (ft_chk_point(grid, grid[i][j], shape) == 1)		//checks if all 4 points exist and are '.'
					ft_setgrid(grid[i][j].content, grid, shape);	//sets grid value from '.' to proper letter
			}	
			j++;
		}
		j = 0;
		i++;
	}
	if (shape == 0)
		return (1);				//passes when all shapes havebeen placed
	return (0);					//fails if entire grid is scanned?
}

void	ft_fillshape1(t_list **grid, int shape, int shape_count)	//????? if checkgrid == 1, fill with alpha and shape
	//gotta make another function
{
	char	y;
	int		i;

	y = '.';
	i = 0;

		if (x[i] == y && x[i + 1] == y && x[i + 2] == y && x[i + 3] == y)
	if (shape == 1)
	{
		if (x[i] == y && x[i + 1] == y && x[i + 2] == y && x[i + 3] == y)
			printf("yay1\n####\n....\n....\n....\n");	//####\n				
		return (1);
	}
	else if (shape == 2)
	else if (x[i] == y && x[i + 5] == y && x[i + 10] == y && x[i + 15] == y)
	{												//#...\n
		printf("yay2\n#...\n#...\n#...\n#...\n");	//#...\n
		return (2);									//#...\n
	}												//#...\n
	else if (shape == 3)
	else if (x[i] == y && x[i + 1] == y && x[i + 5] == y&& x[i + 6] == y)
	{
		printf("yay3\n##..\n##..\n....\n....\n");	//##..\n
		return (3);									//##
	}
	else if (shape == 4)
	else if (x[i] == y && x[i + 1] == y && x[i + 2] == y&& x[i + 6] == y)
	{
		printf("yay4\n###.\n.#..\n....\n....\n");	//###.\n
		return (4);									//.#
	}
	else if (shape == 5)
	else if (x[i] == y && x[i + 5] == y && x[i + 6] == y&& x[i + 10] == y)
	{
		printf("yay5\n#...\n##..\n#...\n....\n");	//#...\n
		return (5);									//##..\n
	}												//#
	else if (shape == 6)
	else if (x[i] == y && x[i + 4] == y && x[i + 5] == y&& x[i + 10] == y)
	{
		printf("yay6\n.#..\n##..\n.#..\n....\n");	//.#..\n
		return (6);									//##..\n
	}												//.#
	else if (shape == 7)
	else if (x[i] == y && x[i + 4] == y && x[i + 5] == y&& x[i + 6] == y)
	{
		printf("yay7\n.#..\n###.\n....\n....\n");	//.#..\n
		return (7);									//###
	}
	else if (shape == 8)
	else if (x[i] == y && x[i + 1] == y && x[i + 6] == y&& x[i + 7] == y)
	{
		printf("yay8\n##..\n.##.\n....\n....\n");	//##..\n
		return (8);									//.##
	}
	else if (shape == 9)
	else if (x[i] == y && x[i + 4] == y && x[i + 5] == y&& x[i + 9] == y)
	{

		printf("yay9\n.#..\n##..\n#...\n....\n");	//.#..\n
		return (9);									//##..\n
	else if (shape == 10)
	}												//#
	else if (x[i] == y && x[i + 1] == y && x[i + 4] == y&& x[i + 5] == y)
	{
		printf("yay10\n..##\n.##.\n....\n....\n");	//.##.\n
		return (10);								//##
	}
	else if (shape == 11)
	else if (x[i] == y && x[i + 5] == y && x[i + 6] == y&& x[i + 11] == y)
	{
		printf("yay11\n#...\n##..\n.#..\n....\n");	//#...\n
		return (11);								//##..\n
	}												//.#
}


int		ft_fillshape2(char *x)
{
	char	y;
	int		i;

	y = '#';
	i = 0;
	else if (shape == 12)
	if (x[i] == y && x[i + 5] == y && x[i + 10] == y&& x[i + 11] == y)
	{
		printf("yay12\n#...\n#...\n##..\n....\n");	//#...\n
		return (12);								//#...\n
	}												//##
	else if (shape == 13)
	else if (x[i] == y && x[i + 3] == y && x[i + 4] == y&& x[i + 5] == y)
	{
		printf("yay13\n..#.\n###.\n....\n....\n");	//..#.\n
		return (13);								//###
	}
	else if (shape == 14)
	else if (x[i] == y && x[i + 1] == y && x[i + 6] == y&& x[i + 11] == y)
	{
		printf("yay14\n##..\n.#..\n.#..\n....\n");	//##..\n
		return (14);								//.#..\n
	}												//.#
	else if (shape == 15)
	else if (x[i] == y && x[i + 1] == y && x[i + 2] == y&& x[i + 5] == y)
	{
		printf("yay15\n###.\n#...\n....\n....\n");	//###.\n
		return (15);								//#
	}
	else if (shape == 16)
	else if (x[i] == y && x[i + 5] == y && x[i + 9] == y&& x[i + 10] == y)
	{
		printf("yay16\n.#..\n.#..\n##..\n....\n");	//.#..\n
		return (16);								//.#..\n
	}												//##
	else if (shape == 17)
	else if (x[i] == y && x[i + 5] == y && x[i + 6] == y&& x[i + 7] == y)
	{
		printf("yay17\n#...\n###.\n....\n....\n");	//#...\n
		return (17);								//###
	}
	else if (shape == 18)
	else if (x[i] == y && x[i + 1] == y && x[i + 5] == y&& x[i + 10] == y)
	{
		printf("yay18\n##..\n#...\n#...\n....\n");	//##..\n
		return (18);								//#...\n
	}												//#
	else if (shape == 19)
	else if (x[i] == y && x[i + 1] == y && x[i + 2] == y&& x[i + 7] == y)
	{
		printf("yay19\n###.\n..#.\n....\n....\n");	//###.\n
		return (19);								//..#
	}
}

t_list		**ft_removepiece(t_list **grid, t_list **stored_pieces, int counter, int fail_insert)
{
	t_list	**head;
	t_list	**buff;
	int		i;

	i = 0;
	counter++;					//replace shape counter by 1 to redo
	i = counter - 1;			//move index to previous state
								//SCAN grid for piece (depends on letter and shape
									//finds first from top left, then finds remaining 3 pieces
									//remove/replace those with '.'
									//move from original placed grid[i][j] to j++;
									//then INSERTPIECE again at new gridpoint
}

t_list		**ft_insertpiece(t_list **grid, t_list **stored_pieces, int counter)
{
	t_list	**head;
	t_list	**buff;
	int		i;
								//checks if piece can fit on map, if not grow map, until everything fits
	i = 0;						//NEED CHECKER FUNCTION FOR IF ANSWER = CORRET (most top left)
									//consider from left to right, then topdown
	if (ft_chk_grid() == 1)
		//FINISHED
	else
		//GROWGRID
}
