/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_pieces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 17:16:37 by wfung             #+#    #+#             */
/*   Updated: 2017/02/26 19:00:18 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*ft_store_pieces(int shape, int shape_count)	//shape from shape_chk
{
	t_list	*store;
	t_list	*head;
	int		i;

	i = 0;
	if (shape_count > 0)			//if more than 0 shapes, create storage
		if (!(store = (t_list*)malloc(sizeof(t_list * (shape_count + 1)))))
			return (0);										//count + 1 for null
	else if (shape == 0)
		return (0);			//if no shapes, fail
	head = store;
	while (i < shape_count)
	{
		store[i].content = shape;	//stores each index to shape value
		i++;
	}
	store[i] = '\0';
	return (head);
}
