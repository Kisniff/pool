/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 21:04:38 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/03 18:02:20 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_comas(char a, char b, char c, char d)
{
	if (!(a == 57 && b == 56 && c == 57 && d == 57))
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_compt_second_number(char a, char b)
{
	char	c;
	char	d;

	c = a;
	while (c < 58)
	{
		d = b + 1;
		while (d < 58)
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(32);
			ft_putchar(c);
			ft_putchar(d);
			print_comas(a, b, c, d);
			d = d + 1;
		}
		c = c + 1;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			ft_compt_second_number(a, b);
			b = b + 1;
		}
		a = a + 1;
	}
}
