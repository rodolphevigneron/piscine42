/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glarivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 11:17:41 by glarivie          #+#    #+#             */
/*   Updated: 2015/08/07 13:50:26 by glarivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char	*fr_strrev(char *str)
{
	int		i;
	int		j;
	int		strlen;
	
	i = 0;
	j = 0;
	strlen = 0;
	while (str[strlen])
		i++;
	i = i - 1;
	while (i < strlen)
	{
		j = str[strlen];
		str[strlen] = str[i];
		str[i] = j;
		i++;
		j--;
	}

	return	(str);
}
