/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:41:48 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/09 17:05:40 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_bits(int nb)
{
	int		div;
	int		i;
	char	table[7];

	div = 128;
	i = 0;
	while (div >= 1)
	{
		if(nb > div)
		{
			table[i] = 1;
			nb = nb - div;
		}
		else
			table[i] = 0;
		i++;
		div = div / 2;
	}
	printf("%s\n", table);
	return (0);
}

int	main()
{
	ft_bits(125);
}
