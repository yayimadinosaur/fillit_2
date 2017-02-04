/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 18:22:15 by wfung             #+#    #+#             */
/*   Updated: 2017/02/03 18:39:38 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_fill_map(t_list *base, char *str, int n)//str = perfect str n = # of shapes
{
	int	i;	//shape counter

	i =  0;	//until i is less than n - 1, see if shape fits, if not, grow map
	//	>>>need a scan map function<<< to scan for locations for empty space for shape
}

t_list	*ft_build_base(char *str, int n)	//str = perfect str n = # of shapes/size?
{
	int	i;	//counter for base # for square (formula = i^2 + i + 1)
			//							i^2 = space for chars, i = \n, 1 = null
	t_list	*head;		//head for list
	t_list	*buff;		//make list
	
	i = 2;	//start off at a 2x2 square; total = 2^2 + 2 + 1 => 7
	if (!(buff = (*t_list)malloc(sizeof(t_list) * ((i * i) + i + 1))))
		return (0);		//>>>test if return 0 is correct if malloc fails<<<
	return (buff);
}
