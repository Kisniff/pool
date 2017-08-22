/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 10:27:23 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/22 10:55:15 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

char	*ft_itoa(int number)
{
	int		size;
	int		i;
	int		produit;
	char	*result;

	produit = 1;
	size = (number < 0) ? 1 : 0;
	i = (number < 0) ? 0 : -1;
	number = number < 0 ? number * -1 : number;
	while (number / produit > 1)
	{
		produit = produit * 10;
		size++;
	}
	produit = produit / 10;
	result = malloc(sizeof(char) * size + 1);
	result[i] = '-';
	while (++i < size)
	{
		result[i] = number / produit + '0';
		number = number % produit;
		produit = produit / 10;
	}
	result[i] = '\0';
	return (result);
}
