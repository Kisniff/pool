/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-soul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 16:28:28 by pde-soul          #+#    #+#             */
/*   Updated: 2017/08/19 17:10:55 by pde-soul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

static void		static_print_nb(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void			ft_putnbr(int nb)
{
	int count;

	if (nb == -2147483648)
	{
		static_print_nb();
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar('0');
	count = 1000000000;
	while (count > nb)
		count /= 10;
	while (count >= 1)
	{
		ft_putchar(48 + nb / count);
		nb -= (nb / count) * count;
		count /= 10;
	}
}

void			print_colle(int x, int y, int num)
{
	ft_putstr("[colle-0");
	ft_putnbr(num);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]\n");
}
