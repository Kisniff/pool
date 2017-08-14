/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:20:20 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/14 11:00:06 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>
#include <stdio.h>

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

void	ft_show_tab(struct s_stock_par *par)
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
	}
}

int main(int ac, char **av)
{
	t_stock_par	structure;

	printf("%d\n", ac);
	structure = ft_param_to_tab(ac, av);
	ft_putchar('y');
	ft_show_tab(&structure);
	return (0);
}
