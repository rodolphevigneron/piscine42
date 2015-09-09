/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 12:09:13 by glarivie          #+#    #+#             */
/*   Updated: 2015/08/14 22:43:49 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*int_tab;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	else
	{
		int_tab = (int *)malloc(sizeof(*int_tab) * (max - min));
		while (i < max)
		{
			int_tab[i] = min + i;
			i++;
		}
		return (int_tab);
	}
}
