/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:20:20 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/14 18:57:40 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

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

void ft_putnbr(int nb)
{
	unsigned int	a;

	if (nb < 0)
	{
		a = nb * -1;
		ft_putchar('-');
	}
	else
		a = nb;
	if (a < 9)
		ft_putchar(a + '0');
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	size;
	int	i;

	size = 1;
	i = 0;
	while (par[size].str != NULL)
	{
		ft_putnbr(par[size].size_param);
		ft_putchar('\n');
		ft_putstr(par[size].copy);
		ft_putchar('\n');
		while (par[size].tab[i])
		{
			ft_putstr(par[size].tab[i]);
			ft_putchar('\n');
			i++;
		}
		size++;
	}
}
