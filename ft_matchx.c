/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matchx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 23:25:57 by wfung             #+#    #+#             */
/*   Updated: 2017/02/09 18:11:11 by wfung            ###   ########.fr       */
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
	int		j;

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
				}
				if (j == 4)
				{
					if (ft_shape_chk(c) == 0)
						return (0);
					j = 0;
				}
			}
			i++;
		}
		if (str[i] != '#' && str[i] != '.' && str[i] != '\n')
			return (0);
	}
	return (1);
}

//MIGHT NEED TO CONDENSE CODE TO FIT NORM; rigorously test for edgecase
