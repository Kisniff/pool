/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleroux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 23:23:05 by pleroux           #+#    #+#             */
/*   Updated: 2017/08/07 12:42:34 by pleroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

static void	static_print_nb(void)
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

void		ft_putnbr(int nb)
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
