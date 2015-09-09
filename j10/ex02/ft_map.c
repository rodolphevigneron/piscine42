/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/18 13:43:24 by glarivie          #+#    #+#             */
/*   Updated: 2015/08/19 10:56:56 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*copy;

	i = 0;
	*copy = (int *)malloc(sizeof(*copy) * length);
	while (i < length)
	{
		copy[i] = (*f)(tab[i]);
		i++;
	}
	return (copy);
}
