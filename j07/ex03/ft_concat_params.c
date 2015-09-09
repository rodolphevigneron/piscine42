/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 15:31:13 by glarivie          #+#    #+#             */
/*   Updated: 2015/08/13 18:14:49 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		length;
	char	*result;

	i = 1;
	j = 0;
	length = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			j++;
		}
		length = length + j;
		j = 0;
		i++;
	}
	i = 1;
	k = 0;
	result = (char *)malloc(sizeof(*result) * length + 1);
	while (i < argc)
	{
		while (argv[i][j])
		{
			result[k] += argv[i][j];
			j++;
			k++;
		}
		j = 0;
		i++;
		result[i] = '\n';
	}
	return (result);
}
