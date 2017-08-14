/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:53:58 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/14 12:47:24 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_off(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*assign(int ac, char **av, char *str, int size_of)
{
	int		idx_l;
	int		idx_c;
	int		idx_str;

	idx_l = 1;
	idx_c = 0;
	idx_str = 0;
	str = (char*)malloc(sizeof(char) * size_of + 1);
	while (idx_l < ac)
	{
		while (av[idx_l][idx_c])
		{
			str[idx_str] = av[idx_l][idx_c];
			idx_str++;
			idx_c++;
		}
		str[idx_str] = '\n';
		idx_str++;
		idx_c = 0;
		idx_l++;
	}
	str[idx_str - 1] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		p;

	i = 1;
	p = 0;
	str = 0;
	while (i < argc)
	{
		p = p + (size_off(argv[i]));
		i++;
	}
	str = assign(argc, argv, str, p);
	return (str);
}
