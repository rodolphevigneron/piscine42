/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/29 14:15:10 by exam              #+#    #+#             */
/*   Updated: 2015/08/29 14:25:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*tmp;

	tmp = NULL;
	list = *begin_list;
	if (list)
	{
		while (list->next != NULL)
		{
			if ((*cmp)(list->data, data_ref) == 0)
			{
				tmp = list->next;
				list = list->next->next;
				free(tmp);
			}
			else
				list = list->next;
		}
	}
}
