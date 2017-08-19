/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 09:57:33 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/16 16:46:01 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "header_d.h"

int	have_num(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		return (1);
	}
	return (0);
}

int	is_op(char *operator)
{
	int	i;

	i = 0;
	while (operator[i])
		i++;
	if (i != 1)
		return (0);
	return (1);
}

int	calculation(int nb1, int nb2, char operateur)
{
	int (*table[5])(int, int);

	table[0] = &addition;
	table[1] = &soustraction;
	table[2] = &multiplication;
	table[3] = &division;
	table[4] = &modulo;
	if (operateur == '+')
		nb1 = table[0](nb1, nb2);
	else if (operateur == '-')
		nb1 = table[1](nb1, nb2);
	else if (operateur == '*')
		nb1 = table[2](nb1, nb2);
	else if (operateur == '/')
		nb1 = table[3](nb1, nb2);
	else if (operateur == '%')
		nb1 = table[4](nb1, nb2);
	return (nb1);
}

int	main(int ac, char **av)
{
	int		nb1;
	int		nb2;
	int		is_ok;
	char	operateur;

	is_ok = 0;
	if (ac != 4)
		return (0);
	is_ok = have_num(av[1]) + have_num(av[3]);
	if (is_ok != 2 || (!(is_op(av[2]))))
	{
		ft_putchar('0');
		return (0);
	}
	nb1 = ft_atoi(av[1]);
	nb2 = ft_atoi(av[3]);
	operateur = av[2][0];
	(nb2 == 0 && operateur == '%') ? ft_putstr("Stop : modulo by zero") : 0;
	(nb2 == 0 && operateur == '/') ? ft_putstr("Stop : division by zero") : 0;
	if ((nb2 == 0 && operateur == '/') || (nb2 == 0 && operateur == '%'))
		return (0);
	nb1 = calculation(nb1, nb2, operateur);
	ft_putnbr(nb1);
	return (0);
}
