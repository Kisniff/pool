/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 12:57:57 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/04 13:40:06 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compt(char *str, int i)
{
	int	a;

	a = 1;
	while (str[i] < 58 && str[i] > 47 && str[i + 1] < 58 && str[i + 1] > 47)
	{
		i++;
		a = a * 10;
	}
	return (a);
}

int	symbols(char *str)
{
	int				i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\b')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	return (i);
}

int	is_neg(char *str)
{
	int				i;

	i = symbols(str);
	if (str[i - 1] == '-')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int				i;
	int				a;
	unsigned int	result;

	i = 0;
	result = 0;
	i = symbols(str);
	if (str[i] <= '9' && str[i] >= '0')
	{
		a = ft_compt(str, i);
		while (a >= 1)
		{
			result = result + (a * (str[i] - 48));
			a = a / 10;
			i++;
		}
		i = result;
		if (is_neg(str))
			return (i * -1);
		return (i);
	}
	return (0);
}
