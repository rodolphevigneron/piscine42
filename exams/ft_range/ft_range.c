/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/21 18:09:05 by exam              #+#    #+#             */
/*   Updated: 2015/08/21 18:29:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		*tab;
	int		i;
	int		size;

	i = 0;
	if (end > start)
		size = end - start + 1;
	if (end < start)
		size = start - end + 1;
	if (start == end)
		size = 1;
	
	tab = (int *)malloc(sizeof(int) * size + 1);
	while (i < size)
	{
		tab[i] = start + i;
		i++;
	}
	return (tab);
}
