/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:52:55 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/09 17:55:59 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int	nb1;
	int	nb2;

	if (nb == -2147483648)
	{
		ft_str("-2147483648");
		return ;
	}
	if ((nb < 0) && (nb != -2147483648))
	{
		nb = -nb;
		ft_putchar('-');
	}
	nb1 = nb / 10;
	nb2 = nb % 10;
	if (nb1 > 0)
		ft_putnbr(nb1);
	ft_putchar(nb2 + 48);
}
