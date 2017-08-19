#include <stdio.h>

int		ft_power(int base_from, int size_of_word)
{
	if (size_of_word == 0)
		return (1);
	else if (size_of_word == 1)
		return (base_from);
	while (size_of_word > 1)
		return (base_from * ft_power(base_from, size_of_word - 1));
	return (0);
}

int		ft_convert_to_ten(unsigned int nb, int base_from)
{
	//fonctionne niauel
	int		i;
	int		size_of_word;
	int		number;
	int		result;

	i = 1;
	size_of_word = 0;
	result = 0;
	while(nb / i > 1)
	{
		size_of_word++;
		i = i * 10;
	}
	i = i / 10;
	while( i >= 1)
	{
		number = nb / i;
		nb = nb % i;
		i = i / 10;
		size_of_word--;
		result = result + number * ft_power(base_from, size_of_word);
	}
	return (result);
}

int		ft_convert_to_base(unsigned int nb, int base_to)
{
	int		power;
	int		tmp;
	int		div;
	int		i;

	power = 0;
	tmp = 0;
	i = 1;
	while (nb > ft_power(base_to, power))
	{
		 power++;
		 i = i * 10;
	}
	while (power > 0)
	{
		power--;
		i = i / 10;
		div = nb / ft_power(base_to, power);
		tmp = tmp + div * i;
		nb = nb - (ft_power(base_to, power)) * div;
	}
	return (tmp);
}

int	main()
{
	char				*base_from;
	char				*base_to;
	char				*u_number;

	base_from = '7';
	base_to = '2';
	u_number = "356";
	if (base_from == base_to)
		return (u_number);
	else
	{
		u_number = ft_convert_to_ten(u_number, base_from);
		printf("%d\n", u_number);
		u_number = ft_convert_to_base(u_number, base_to);
		printf("%d\n", u_number);
	}
	return (0);
}
