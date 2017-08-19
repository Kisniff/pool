/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 20:57:36 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/03 18:02:03 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	compt_third_number(int a, int b)
{
	char	c;

	c = b + 1;
	while (c < 58)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (!(a == 55 && b == 56 && c == 57))
		{
			ft_putchar(44);
			ft_putchar(32);
		}
		c = c + 1;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;

	a = 48;
	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			compt_third_number(a, b);
			b = b + 1;
		}
		a = a + 1;
	}
}
