#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_putchar.c"
#include "../../j04/ex01/ft_recursive_factorial.c"
#include "../../j04/ex02/ft_iterative_power.c"
#include "../../j04/ex03/ft_recursive_power.c"
#include "../../j04/ex04/ft_fibonacci.c"
#include "../../j04/ex05/ft_sqrt.c"
#include "../../j04/ex06/ft_is_prime.c"

//ex00
/*
int	main()
{
	int	i;

	i = 0;
	i = ft_iterative_factorial(i);
	printf("%d", i);
}
*/
//ex01
/*int	main()
{
	int	i;

	i = 13;
	printf("%d", ft_recursive_factorial(i));
}*/

//ex02
/*int		main()
{
	int	i;

	i = 3;
	printf("%d", ft_iterative_power(i, 0));
}*/

//ex03
int		main ()
{
	printf("%d", ft_fibonacci(100));
}

//ex04
/*int		main()
{
	int	i;

	i = 21483647;
	printf("%d", ft_fibonacci(i));
}*/
/*
//ex06
int		main()
{
	int	i;

	i = 214897647;
	printf("%d", ft_is_prime(i));
}*/
