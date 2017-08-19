/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 12:05:21 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/06 12:42:53 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		size_of(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;
	int	b;

	i = size_of(src);
	a = size_of(dest);
	b = 0;
	while (b < a + i)
	{
		dest[b + a] = src[b];
		b++;
	}
	return (dest);
}
