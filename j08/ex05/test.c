/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:24:25 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/14 11:11:52 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


void	ft_puchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show_tab(struct s_stock_par	*par)
{
	int	size;

	size = 0;
	while (par[size].str[0] != '0')
	{
		ft_putstr(par[size].str);
		ft_putchar('\n');
		ft_putchar(par[size].size_param + '0');
		ft_putchar('\n');
		ft_putstr(par[size].copy);
		ft_putchar('\n');
		size++;
	}
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
	st_table[ac].copy = (char*)malloc(sizeof(char) * size_p);
	while (av[ac][++i])
	{
		st_table[ac].copy[i] = av[ac][i];
	}
	return (st_table);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*st_table;
	int			size_p;

	size_p = 0;
	st_table = malloc(sizeof(t_stock_par) * ac);
	st_table[ac].str = malloc(sizeof(char));
	st_table[ac].str[0] = '0';
	while (--ac >= 0)
	{
		assign_val(ac, av, st_table);
	}
	return (st_table);
}

int main(int ac, char** av)
{
	t_stock_par *structure;

	structure = ft_param_to_tab(ac, av);
	ft_show_tab(structure);
	return (0);
}
