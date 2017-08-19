/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 17:01:22 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/09 17:56:18 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (to_find[i])
		i++;
	if (i == 0)
		return (str);
	while (str[k])
	{
		while (to_find[j] == str[k + j])
		{
			if (j == i - 1)
				return (str + k);
			j++;
		}
		j = 0;
		k++;
	}
	return (0);
}
