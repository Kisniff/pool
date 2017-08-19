/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 10:52:13 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/16 13:45:51 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			if (str[i] != '\0')
				i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j++;
	}
	return (j);
}

char	*ft_fstr(char *str, int *j)
{
	int		start;
	int		i;
	int		end;
	char	*string;

	start = *j;
	i = start;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	*j = i;
	i = -1;
	if (!(string = (char*)malloc(end - start + 1)))
		return (NULL);
	while (i < end - start)
	{
		string[i] = str[start + i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split_whitespaces(char *str)
{
	int		j;
	int		index;
	int		word;
	char	**tab;

	j = 0;
	index = 0;
	word = 0;
	if (str == NULL)
		return (0);
	word = ft_strlen(str);
	tab = (char**)malloc(sizeof(char*) * (word + 1));
	while (str[0] == ' ' || str[0] == '\n' || str[0] == '\t')
		str++;
	while (str[j] != '\0')
	{
		tab[index] = ft_fstr(str, &j);
		index++;
	}
	tab[index] = 0;
	return (tab);
}
