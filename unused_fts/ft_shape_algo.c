/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 00:11:05 by wfung             #+#    #+#             */
/*   Updated: 2017/02/09 00:30:28 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_shape_algo(char *str)		//str = perf str; n = # of shapes
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = 0;
	if (!(buff = (char*)malloc(sizeof(char * 5))))
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '#' && j < 4)
		{
			buff[j] = i;
			j++;
		}
		if (j == 4)
		{
			buff[j] = '\0';
			if (ft_shape_chk2(str, buff) == 0)
				return (0);
			j = 0;
		}
		i++;
	}
	return (1);
}
