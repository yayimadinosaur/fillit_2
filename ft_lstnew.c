/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:57:49 by wfung             #+#    #+#             */
/*   Updated: 2017/02/17 18:29:00 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*current;

	current = (t_list*)malloc(sizeof(t_list));
	if (!current)
		return (0);
	if (content == 0)
	{
		current->content = 0;
		current->content_size = 0;
	}
	else
	{
		current->content_size = content_size;
		current->content = ft_memalloc(content_size);
		if (current->content == 0)
		{
			ft_memdel((void**)&current);
			return (0);
		}
		ft_memmove(current->content, content, content_size);
	}
	current->next = 0;
	return (current);
}
