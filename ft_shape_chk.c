/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_chk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:36:17 by wfung             #+#    #+#             */
/*   Updated: 2017/01/26 23:35:42 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <string.h>
int		ft_shape1(char *start)
{			//start used to be &start
	if (ft_strncmp("####", start, 4) == 0)
	{
		printf("yay1\n");
		return (1);
	}
	else if (ft_strncmp("#...\n#...\n#...\n#", start, 16) == 0)
	{
		printf("yay2\n");
		return (2);
	}
	else if (ft_strncmp("##..\n##", start, 7) == 0)
	{
		printf("yay3\n");
		return (3);
	}
	else if (ft_strncmp("###.\n.#", start, 7) == 0)
	{
		printf("yay4\n");
		return (4);
	}
	else if (ft_strncmp("#...\n##..\n#", start, 11) == 0)
	{
		printf("yay5\n");
		return (5);
	}
	else if (ft_strncmp("#..\n##..\n.#", start, 11) == 0)
	{
		printf("yay6\n");
		return (6);
	}
	else if (ft_strncmp("#..\n###", start, 7) == 0)
	{
		printf("yay7\n");
		return (7);
	}
	else if (ft_strncmp("##..\n.##", start, 8) == 0)
	{
		printf("yay8\n");
		return (8);
	}
	else if (ft_strncmp("#..\n##..\n#", start, 10) == 0)
	{
		printf("yay9\n");
		return (9);
	}
	else if (ft_strncmp("##.\n##", start, 6) == 0)
	{
		printf("yay10\n");
		return (10);
	}
	else if (ft_strncmp("#...\n##..\n.#", start, 12) == 0)
	{
		printf("yay11\n");
		return (11);
	}
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
		printf("yay12\n");
		return (12);
	}
	else if (ft_strncmp("#.\n###", start, 6) == 0)
	{
		printf("yay13\n");
		return (13);
	}
	else if (ft_strncmp("##..\n.#..\n.#", start, 12) == 0)
	{
		printf("yay14\n");
		return (14);
	}
	else if (ft_strncmp("###.\n#", start, 6) == 0)
	{
		printf("yay15\n");
		return (15);
	}
	else if (ft_strncmp("#..\n.#..\n##", start, 11) == 0)
	{
		printf("yay16\n");
		return (16);
	}
	else if (ft_strncmp("#...\n###", start, 8) == 0)
	{
		printf("yay17\n");
		return (17);
	}
	else if (ft_strncmp("##..\n#...\n#", start, 11 ) == 0)
	{
		printf("yay18\n");
		return (18);
	}
	else if (ft_strncmp("###.\n..#", start, 8) == 0)
	{
		printf("yay19\n");
		return (19);
	}
	else
	{
		printf("shape2 fail\n");
		return (0);
	}
}

int		ft_shape_chk(char *start)
{
	if (ft_shape1(start) == 0 && ft_shape2(start) == 0)
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
