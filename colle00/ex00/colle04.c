/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpernes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/09 11:51:10 by fpernes           #+#    #+#             */
/*   Updated: 2015/08/09 11:51:12 by fpernes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putchar(char c);

void	ft_print_line(char angle, char mid, char angle2, int colle_x)
{
	int i;

	i = 0;
	if (colle_x < 2)
	{
		ft_putchar(angle);
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(angle);
		while (i < colle_x - 2)
		{
			ft_putchar(mid);
			i++;
		}
		ft_putchar(angle2);
		ft_putchar('\n');
	}
}

void	colle(int x, int y)
{
	int	j;

	j = 0;
	if (x > 0 && y > 0)
	{
		if (y < 2)
		{
			ft_print_line('A', 'B', 'C', x);
		}
		else
		{
			ft_print_line('A', 'B', 'C', x);
			while (j < y - 2)
			{
				ft_print_line('B', ' ', 'B', x);
				j++;
			}
			ft_print_line('C', 'B', 'A', x);
		}
	}
}
