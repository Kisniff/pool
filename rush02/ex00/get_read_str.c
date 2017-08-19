/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_read_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 15:56:49 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/19 19:12:47 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

int		str_len(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * str_len(src))	;
	while (i < str_len(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	free(dest);
	return (dest);
}

int		str_len_total(char *old, char *new)
{
	int	total_s;
	int	idx;

	total_s = 0;
	idx = -1;
	while (old[++idx])
		total_s++;
	idx = -1;
	while (new[++idx])
		total_s++;
	return (total_s);
}

char	*concat_str(char *old, char *new)
{
	int		idx;
	int		total_s;//taille des deux chaines
	char	*result;

	if (old == 0 && new != 0)
		return (ft_strdup(new));
	else if (old != 0 && new == 0)
		return (ft_strdup(old));
	result = malloc(sizeof(char) * str_len_total(old, new) + 1);
	idx = -1;
	total_s = 0;
	while (old[++idx])
	{
		result[total_s] = old[idx];
		total_s++;
	}
	idx = -1;
	while (new[++idx])
	{
		result[total_s] = new[idx];
		total_s++;
	}
	result[total_s] = '\0';
	free(result);
	return (result);
}

int main()
{
	char	*tmp;
	char	*finalized;
	int		ret;

	ret = 0;
	while (read(0, tmp, 1))
		finalized = concat_str(finalized, tmp);
	return (0);
}
