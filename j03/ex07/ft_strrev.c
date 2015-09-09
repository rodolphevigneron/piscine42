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

char	*fr_strrev(char *str)
{
	int		i;			/* compteur */
	int		j;			/* valeur tmp */
	int		strlen;		/* taille de la chaine */
	
	i = 0;
	j = 0;
	strlen = 0;
	while (str[i])
	{
		i++;
	}
	i = i - 1;			/* on retire le caratere \0 */

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
