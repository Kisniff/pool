/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:53:58 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/11 15:26:39 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_of(char *str)
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
	str = (char*)malloc(sizeof(char) * size_of(str));
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
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		p;

	i = 1;
	p = 0;
	while (i < argc)
	{
		p = p + (size_of(argv[i]));
		i++;
	}
	str = assign(argc, argv, str, p);
	return (str);
}
