/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_chk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:36:17 by wfung             #+#    #+#             */
/*   Updated: 2017/01/27 02:51:33 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <string.h>
int		ft_shape1(char *start)
{			//start used to be &start
	if (ft_strncmp("####", start, 4) == 0)	//####
	{
		printf("yay1\n");					
		return (1);
	}
	else if (ft_strncmp("#...\n#...\n#...\n#", start, 16) == 0)
	{						//#...\n
		printf("yay2\n");	//#...\n
		return (2);			//#...\n
	}						//#
	else if (ft_strncmp("##..\n##", start, 7) == 0)
	{
		printf("yay3\n");	//##..\n
		return (3);			//##
	}
	else if (ft_strncmp("###.\n.#", start, 7) == 0)
	{
		printf("yay4\n");	//###.\n
		return (4);			//.#
	}
	else if (ft_strncmp("#...\n##..\n#", start, 11) == 0)
	{
		printf("yay5\n");	//#...\n
		return (5);			//##..\n
	}						//#
	else if (ft_strncmp("#..\n##..\n.#", start, 11) == 0)
	{
		printf("yay6\n");	//.#..\n
		return (6);			//##..\n
	}						//.#
	else if (ft_strncmp("#..\n###", start, 7) == 0)
	{
		printf("yay7\n");	//.#..\n
		return (7);			//###
	}
	else if (ft_strncmp("##..\n.##", start, 8) == 0)
	{
		printf("yay8\n");	//##..\n
		return (8);			//.##
	}
	else if (ft_strncmp("#..\n##..\n#", start, 10) == 0)
	{
		printf("yay9\n");	//.#..\n
		return (9);			//##..\n
	}						//#
	else if (ft_strncmp("##.\n##", start, 6) == 0)
	{
		printf("yay10\n");	//.##.\n
		return (10);		//##
	}
	else if (ft_strncmp("#...\n##..\n.#", start, 12) == 0)
	{
		printf("yay11\n");	//#...\n
		return (11);		//##..\n
	}						//.#
	else
	{
		printf("shape1 fail\n");
		return (0);
	}
}

int		ft_shape2(char *start)
{
	if (ft_strncmp("#...\n#...\n##", start, 12) == 0)
	{
		printf("yay12\n");	//#...\n
		return (12);		//#...\n
	}						//##
	else if (ft_strncmp("#.\n###", start, 6) == 0)
	{
		printf("yay13\n");	//..#.\n
		return (13);		//###
	}
	else if (ft_strncmp("##..\n.#..\n.#", start, 12) == 0)
	{
		printf("yay14\n");	//##..\n
		return (14);		//.#..\n
	}						//.#
	else if (ft_strncmp("###.\n#", start, 6) == 0)
	{
		printf("yay15\n");	//###.\n
		return (15);		//#
	}
	else if (ft_strncmp("#..\n.#..\n##", start, 11) == 0)
	{
		printf("yay16\n");	//.#..\n
		return (16);		//.#..\n
	}						//##
	else if (ft_strncmp("#...\n###", start, 8) == 0)
	{
		printf("yay17\n");	//#...\n
		return (17);		//###
	}
	else if (ft_strncmp("##..\n#...\n#", start, 11 ) == 0)
	{
		printf("yay18\n");	//##..\n
		return (18);		//#...\n
	}						//#
	else if (ft_strncmp("###.\n..#", start, 8) == 0)
	{
		printf("yay19\n");	//###.\m
		return (19);		//..#
	}
	else if (ft_strncmp("##.\n..##", start, 8) == 0)
	{
		printf("yay20\n");	//.##.\n
		return (20);		//..##
	}
	else
	{
		printf("shape2 fail\n");
		return (0);
	}
}

int		ft_shape3(char *start)
{
	if (ft_strncmp("#..\n.#..\n.#..\n.#", start, 16) == 0)
	{						//.#..\n
		printf("yay21\n");	//.#..\n
		return (21);		//.#..\n
	}						//.#
	else if (ft_strncmp("#.\n..#.\n..#.\n..#", start, 16) == 0)
	{						//..#.\n
		printf("yay22\n");	//..#.\n
		return (22);		//..#.\n
	}						//..#
	else if (ft_strncmp("#\n...#\n...#\n...#", start, 14) == 0)
	{						//...#\n
		printf("yay23\n");	//...#\n
		return (23);		//...#\n
	}						//...#
	else
	{
		printf("shape3 fail\n");
		return (0);
	}
}

int		ft_shape_chk(char *start)
{
	if (ft_shape1(start) == 0 && ft_shape2(start) == 0 && ft_shape3(start) == 0)
	{
		printf("ft_shape_chk failed!! =(\n");
		return(0);
	}
	else
	{
		printf("ft_shape_chk passed! =D\n");
		return (1);
	}
}
