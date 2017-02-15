/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matchx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 23:25:57 by wfung             #+#    #+#             */
/*   Updated: 2017/02/14 20:32:11 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*int		ft_matchstart(char *str)
{
	
}
*/
int		ft_matchx(char *str)								
{
	char	*c;
	int		i;

	i = 0;
	printf(">>>start matchx\n%s\n", str);
	while (*str++)
	{
		printf("current = %c\n", *str);
		if (*str == '#')
		{
			if (i == 0)
				c = str;
			i++;
			printf(">>># counter = %i\n", i);
		}
		if (i == 4)
		{
			printf(">>>start shape_chk\n");
			if (ft_shape_chk(c) == 0)
				return (0);
			i = 0;
		}
	}
	return (1);
}

//MIGHT NEED TO CONDENSE CODE TO FIT NORM; rigorously test for edgecase
