/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/29 14:28:54 by exam              #+#    #+#             */
/*   Updated: 2015/08/29 15:36:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	**ft_split(char *str)
{
	int		count;
	int		max_len;
	int		words;
	char	**ret;
	int		i;
	int		j;

	i = 0;
	j = 0;
	count = 0;
	max_len = 1;
	words = 1;
	while (str[count])
	{
		if (str[count] == ' ' || str[count] == '\t' || str[count] == '\n')
		{
			words++;
			if (max_len < (count - max_len))
				max_len = count - max_len;
		}
		count++;
	}

	printf("COUNT = %d\n", count);
	printf("WORDS = %d\n", words);
	printf("MAX_LEN = %d\n", max_len);

	ret = (char **)malloc(sizeof(char *) * words + 1);
	count = 0;

	while (count <= words)
	{
		ret[count] = (char *)malloc(sizeof(char) * max_len + 1);
		count++;
	}

	count = 0;
	while (str[count])
	{
		if (str[count] != ' ' && str[count] != '\t' && str[count] != '\n')
		{
			ret[j][i] = str[count];
			i++;
			count++;
		}
		else
		{
			while(str[count] == ' ' || str[count] == '\t' || str[count] == '\n')
				count++;
			ret[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	ret[words] = NULL;
	return (ret);
}

int		main()
{
	char	**test;
	
	test = ft_split("     lol petit canard");

			
	printf("%s\n", test[0]);
	printf("%s\n", test[1]);
	printf("%s\n", test[2]);
	printf("%s\n", test[3]);
	return (0);
}
