/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 13:17:40 by glarivie          #+#    #+#             */
/*   Updated: 2015/08/13 13:42:14 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int i = 0;
	while (i < (9 - 4))
	{
		printf("%d\n", (*ft_range(4, 9) + i));
		i++;
	}
	return 0;
}
