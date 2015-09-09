/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <glarivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/12 09:52:20 by glarivie          #+#    #+#             */
/*   Updated: 2015/08/12 11:48:42 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	while (str[++i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (!(str[i - 1] > 96 && str[i - 1] < 123)
					|| !(str[i - 1] > 64 && str[i - 1] < 91)
					|| !(str[i - 1] > 47 && str[i - 1] < 58))
				str[i] = str[i] - 32;
		}
		if (str[i] > 64 && str[i] < 91)
		{
			if ((str[i - 1] > 96 && str[i - 1] < 123)
					|| (str[i - 1] > 64 && str[i - 1] < 91)
					|| (str[i - 1] > 47 && str[i - 1] < 58))
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
