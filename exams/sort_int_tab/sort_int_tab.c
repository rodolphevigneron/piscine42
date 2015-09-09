/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 20:25:08 by exam              #+#    #+#             */
/*   Updated: 2015/08/14 20:54:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int		i;
	int		tmp;

	i = 0;
	tmp = 0;
	while (size > 0)
	{
		while (i < size)
		{
			if (tab[i] > tab[size - 1])
			{
				tmp = tab[i];
				tab[i] = tab[size - 1];
				tab[size -1] = tmp;
			}
			i++;
		}
		size--;
	}
}

