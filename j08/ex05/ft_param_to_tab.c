/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:24:25 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/14 18:57:19 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

t_stock_par			*assign_val(int ac, char **av, t_stock_par *st_table)
{
	int			size_p;
	int			i;

	size_p = 0;
	i = -1;
	while (av[ac][size_p])
		size_p++;
	st_table[ac].size_param = size_p;
	st_table[ac].str = av[ac];
	st_table[ac].tab = ft_split_whitespaces(av[ac]);
	st_table[ac].copy = (char*)malloc(sizeof(char) * size_p + 1);
	while (av[ac][++i]) //OP
		st_table[ac].copy[i] = av[ac][i];
	st_table[ac].copy[i + 1] = '\0';
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
		st_table = assign_val(ac, av, st_table);
	return (st_table);
}

int	main(int ac, char **av)
{
	struct s_stock_par	*structure;
	int					i;

	i = 0;
	structure = ft_param_to_tab(ac, av);
	ft_show_tab(structure);
	return (0);
}
