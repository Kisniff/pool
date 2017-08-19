/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 10:04:43 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/19 10:10:20 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int number;

	if (nbr < 0)
	{
		ft_putchar('-');
		number = -nbr;
	}
	else
		number = nbr;
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(number + '0');
	else if (nbr > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}
