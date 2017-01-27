/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matchx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 23:25:57 by wfung             #+#    #+#             */
/*   Updated: 2017/01/27 01:39:06 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_matchx(char *str)								
{
	char	*c;			//start strcmp index
	int		j;			//end strcmp index + # counter
	int		i;
						//str[i] was *str
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' || str[i] == '.' || str[i] == '\n')
		{
			if (str[i] == '#')
			{
				if (j < 4)
				{
					if (j == 0)
						c = &str[i];
					j++;
//					printf("matchx [j = %i]\n", j);
				}
				if (j == 4)
				{
					printf("matchx matching j = %i\n", j);
					if (ft_shape_chk(c) == 0)
					{
						printf("ft_shapechk in matchx failed\n");
						return (0);
					}
					j = 0;
				}
			}
			i++;
		}
		if (str[i] != '#' && str[i] != '.' && str[i] != '\n')
		{
			printf("matchx input invalid [j] = %i\n", j);
			printf("i = %i\n", i);
			return (0);
		}
	}
	return (1);
}

//MIGHT NEED TO CONDENSE CODE TO FIT NORM; rigorously test for edgecase
