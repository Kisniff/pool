/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 09:57:30 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/09 11:42:31 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		word_len(char *str, int i)
{
	int	a;

	a = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
	{
		i++;
		a++;
	}
	return (a);
}

int		word_count(char *str)
{
	int		i;
	int		w_c;

	i = 0;
	w_c = 0;
	if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		w_c++;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\t' && str[i + 1] != '\n'
					&& i + 1 < ft_str_len(str))
				w_c++;
		}
		i++;
	}
	return (w_c);
}

char	**write_in_result(char *str, char **result, int w_c, int idx)
{
	int		w_i;
	int		len;

	result = (char**)malloc(sizeof(char*) * word_count(str));
	while (w_c < word_count(str))
	{
		len = word_len(str, idx);
		if (len > 0)
		{
			result[w_c] = (char*)malloc(sizeof(char) * len + 2);
			w_i = 0;
			while (w_i < len && idx < ft_str_len(str))
			{
				result[w_c][w_i] = str[idx];
				w_i++;
				idx++;
			}
			result[w_c][w_i] = '\n';
			w_c++;
		}
		else
			idx++;
	}
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	int		a;
	int		i;
	char	**result;

	i = 0;
	a = 0;
	if (str == NULL)
		return (0);
	result = write_in_result(str, result, i, a);
	return (result);
}
