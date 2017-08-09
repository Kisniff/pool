#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_putchar.c"
#include "../../../correctionj03/ex08/ft_atoi.c"

int	main()
{
	int		i;
	int		b;
	char	*test = "   +2147483648jkl9898kjh";

	i = 4;
	b = 2;
	//ft_ultimate_div_mod(&i, &b);
	//printf("%d", i);
	//printf("%d", b);
	//ft_putstr(test);
	//printf("%d", is_neg(test));
	printf("%d\n", ft_atoi(test));
	//printf("%d", atoi(test));
	return(0);
}
