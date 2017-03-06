/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_letter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:40:02 by wfung             #+#    #+#             */
/*   Updated: 2017/01/27 00:38:02 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_shape_letter(char *str, int n)
{
	int		i;			//counter for input str (passed str is perfect)
	int		j;			//counter for each shape (up to 3)
	char	c;			//letter assigning for shape
	char	*buff;		//changed string

	i = 0;
	j = 0;
	c = 'A';
	if (!(buff = (char*)malloc(sizeof(char) * (n + 1))))
			return (0);
	while (str[i] != '\0')		//not sure if n is necessary
	{
		if (str[i] == '#')			//assign letter for tetrimino
		{
			if (j < 3)
				j++;
			else if (j == 3)
			{
				c = c + 1;			//increases letter counter every 4 piece
				j = 0;
			}
		}
		buff[i] = str[i];		//copy pieces
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

//MIGHT NEED TO REDO depending on how the fitting into container function goes
