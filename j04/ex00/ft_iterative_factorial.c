/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 11:08:29 by glarivie          #+#    #+#             */
/*   Updated: 2015/09/09 14:27:56 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		   result;
	int		i;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
