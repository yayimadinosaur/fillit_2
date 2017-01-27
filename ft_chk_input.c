/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chk_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:32:00 by wfung             #+#    #+#             */
/*   Updated: 2017/01/27 00:58:54 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_chk_count(char *str, int i, int j, int k) // all, #, \n
{
	if (ft_strlen(str) < 20 || ft_strlen(str) > 545) //chk min + max char count
		return (0);
	if ((i == 20 && j != 4 && k != 4) || i < 20)
		return (0);
	if (i > 20)
	{
		printf("[i > 21] i = %i\n", i);
		if ((i - 20) % 21 != 0 || j % 4 != 0 || (k - 4 ) % 5 != 0)
		{
			printf("chk_count [i] = '%i'[j] = '%i'[k] = '%i'\n", i, j, k);
			return (0);
		}
	}			//	use strlen to compare vs params?
	printf("chk_count passed\n");
	return (1);
}

int		ft_chk_char(char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '#' || str[i] == '\n' || str[i] == '.')
		{
			if (str[i] == '#')
				j++;
			else if (str[i] == '\n')
				k++;
			i++;
		}
		else if (str[i] != '#' && str[i] != '\n' && str[i] != '.')
			return (0);
	}
	if (ft_chk_count(str, i, j, k) != 1)
		return (0);
	return (1);
}

int		ft_chk_input(char *str)
{
	int		i;
	int		j;					// # counter
	int		k;					// \n counter

	i = 0;
	j = 0;
	k = 0;
	if (ft_chk_char(str) != 1)
	{
		printf("-----\n");
		printf("chk_input chk_char failed\n----");
		return (0);
	}
	printf("-----\n");
	printf("chk_input chk_char passed\n");
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '#' || str[i] == '\n')
		{
			if (str[i] == '#')
				j++;
			else if (str[i] == '\n')
				k++;
			i++;
		}
		else
			return (0);
	}
	printf("-----\n");
	printf("end of chk_input\n----\n");
	return (1);
}
