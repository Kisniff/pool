/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:24:25 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/14 14:45:42 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

t_stock_par			*assign_val(int ac, char **av, t_stock_par *st_table)
{
	int			size_p;
	int			i;
	int			j;

	size_p = 0;
	i = -1;
	j = 0;
	while (av[ac][size_p])
		size_p++;
	st_table[ac].size_param = size_p;
	st_table[ac].str = av[ac];
	st_table[ac].tab = ft_split_whitespaces(av[ac]);
	st_table[ac].copy = (char*)malloc(sizeof(char) * size_p);
	while (av[ac][++i])
		st_table[ac].copy[i] = av[ac][i];
	return (st_table);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*st_table;
	int			size_p;

	size_p = 0;
	st_table = malloc(sizeof(t_stock_par) * ac);
	st_table[ac].str = 0;
	while (--ac >= 1)
		assign_val(ac, av, st_table);
	return (st_table);
}
