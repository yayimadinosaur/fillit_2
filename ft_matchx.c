/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matchx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 23:25:57 by wfung             #+#    #+#             */
/*   Updated: 2017/02/15 20:19:15 by wfung            ###   ########.fr       */
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
//	int		i;
	int		j;

//	i = 0;
	j = 0;
	c = str;
//	printf(">>>start matchx\npassed in str\n%s\n>>>>\n", str);
	while (*str)
	{
		if (*str == '#')
		{
			if (j == 0)
				c = str;
//			printf("c = %c\n", *c);
			j++;
		}
		if (j == 4)
		{
		//	printf(">>>start shape_chk\npassing in %s\n<<<<", c);
			if (ft_shape_chk(c) == 0)
				return (0);
			j = 0;
		}
//		i++;
		str++;
	}
	printf("finished matchx\n");
	return (1);
}

//MIGHT NEED TO CONDENSE CODE TO FIT NORM; rigorously test for edgecase
/*
int		main(void)
{
	char *str;

	str = 	"####\n"
			"....\n"
			"....\n"
			"....\n"
			;
	printf(">>>>>manual test matchx\n");
	printf("result = %i\n", ft_matchx(str));
	return (0);
}
*/
