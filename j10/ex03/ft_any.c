/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 14:02:25 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/13 14:22:20 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int length, int (*f)(char*))
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
