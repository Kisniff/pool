/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 10:48:25 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/22 10:54:42 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	cro;
	int	dec;

	cro = -1;
	dec = -1;
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			cro = 0;
	if (cro != 0)
		cro = 1;
	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			dec = 0;
	if (dec != 0)
		dec = 1;
	if (dec || cro)
		return (1);
	else
		return (0);
}
