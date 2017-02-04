/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 18:22:15 by wfung             #+#    #+#             */
/*   Updated: 2017/02/03 20:24:13 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_fill_map(t_list *base, char *str, int n)//str = perfect str n = # of shapes
{
	int	i;	//shape counter

	i =  0;	//until i is less than n - 1, see if shape fits, if not, grow map
	//	>>>need a scan map function<<< to scan for locations for empty space for shape
}

t_list	*ft_build_base(int n)	//str = perfect str n = # of shapes/size?
{
	int	i;	//counter for base # for square
	int	j;	//counter for each t_list + formula

	t_list	*head;		//head for list
	t_list	*buff;		//make list
	
	i = 0;
	j = (n * n) + n + 1;	//i^2 = space for chars, i = \n, 1 = null
	if (!(buff = (*t_list)malloc(sizeof(t_list) * j)))
		return (0);		//>>>test if return 0 is correct if malloc fails<<<
	buff[j] = '\0';
	head = buff;
	while (buff != '\0' && i < j)	//i counter eliminates \0
	{
		if (i % (n + 1) == 0)
			buff->data = '\n';
		else
			buff->data = '.';
		buff = buff->next;
		i++;
	}
	return (head);
}

	//start off at a 2x2 square; total = 2^2 + 2 + 1 => 7

