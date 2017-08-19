/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 10:04:21 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/03 22:51:43 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	resultat = nb;
	while (nb > 1)
	{
		resultat = resultat * (nb - 1);
		nb = nb - 1;
	}
	return (resultat);
}
