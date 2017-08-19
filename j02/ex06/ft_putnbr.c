/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 10:52:55 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/04 11:07:58 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		is_neg(int nb)
{
	unsigned int	u_nb;

	if (nb < 0)
	{
		u_nb = nb * -1;
		ft_putchar(45);
		return (u_nb);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int				i;
	unsigned int	u_nb;
	char			result;

	i = 10;
	u_nb = is_neg(nb);
	while (u_nb / i > 0)
		i = i * 10;
	i = i / 10;
	while (i >= 1)
	{
		result = u_nb / i + 48;
		ft_putchar(result);
		u_nb = u_nb % i;
		i = i / 10;
	}
}
