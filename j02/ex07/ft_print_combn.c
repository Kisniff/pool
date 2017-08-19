/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:47:57 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/03 18:03:04 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_combn(void)
{
	char	a;
	char	b;

	a = 48;
	while (a < 57)
	{
		b = a + 1;
		while (b < 58)
		{
			ft_putchar(a);
			ft_putchar(b);
			if (!(a == 56 && b == 57))
			{
				ft_putchar(44);
				ft_putchar(32);
			}
			b = b + 1;
		}
		a = a + 1;
	}
}
