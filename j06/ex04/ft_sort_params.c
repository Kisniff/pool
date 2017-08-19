/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlehideu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 16:10:57 by jlehideu          #+#    #+#             */
/*   Updated: 2017/08/08 09:18:35 by jlehideu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char stf);

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	swap_str(char **str, char **str2)
{
	char *tmp;

	tmp = *str;
	*str = *str2;
	*str2 = tmp;
	return (0);
}

int	print_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	b;
	int	*pt_i;

	b = argc;
	pt_i = &argc;
	i = argc - 1;
	while (b > 0)
	{
		while (i > 0)
		{
			if (ft_strcmp(argv[i], argv[i - 1]) < 0)
			{
				swap_str(&argv[i], &argv[i - 1]);
			}
			i--;
		}
		b--;
		i = argc - 1;
	}
	print_args(argc, argv);
	return (0);
}
