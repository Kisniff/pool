#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../ft_putchar.c"
#include "../../j05/ex02/ft_atoi.c"
#include "../../j05/ex03/ft_strcpy.c"
#include "../../j05/ex04/ft_strncpy.c"
#include "../../j05/ex05/ft_strstr.c"
#include "../../j05/ex06/ft_strcmp.c"
#include "../../j05/ex07/ft_strncmp.c"
#include "../../j05/ex08/ft_strupcase.c"
#include "../../j05/ex09/ft_strlowcase.c"
#include "../../j05/ex10/ft_strcapitalize.c"
#include "../../j05/ex11/ft_str_is_alpha.c"
#include "../../j05/ex12/ft_str_is_numeric.c"
#include "../../j05/ex13/ft_str_is_lowercase.c"
#include "../../j05/ex14/ft_str_is_uppercase.c"
#include "../../j05/ex15/ft_str_is_printable.c"
#include "../../j05/ex16/ft_strcat.c"
#include "../../clone/ex17/ft_strncat.c"

int	main()
{
	int		b;
	char	test[] = "bbbbb";
	char	*dest;
	char	dest2[] = "yejhgkjhg";

	b = 2147483647;
	b = 3;
	dest = malloc(sizeof(char)*42);
	dest[0] = 'a';
	dest[1] = 'a';
	dest[2] = 'a';
	dest[3] = 'a';
//	printf("%d\n", ft_atoi(test));
//	printf("%d", atoi(test));
	//printf("%s\n", ft_strcpy(dest, test));
	//printf("%s", strcpy(dest, test));
//	printf("%s\n", ft_strncpy(dest, test, b));
//	printf("%s", strncpy(dest, test, b));
//	printf("%s", strstr(dest2, test));
//	printf("%s", ft_strstr(dest2, test));
//	printf("%s", ti_strstr(dest, test));
	//printf("%d\n", strcmp(dest2, test));
	//printf("%d", ft_strcmp(dest2, test));
	printf("%d\n", ft_strncmp(dest2, test, b));
	//printf("%d\n", strncmp(dest2, test, b));
//	printf("%s", ft_strupcase(test));
	//printf("%s", ft_strlowcase(test));
//	printf("%s", ft_strcapitalize(test));
//	printf("%d", ft_str_is_alpha(test));
	//printf("%d", ft_str_is_numeric(test));
	//printf("%d", ft_str_is_lowercase(test));
////	printf("%d", ft_str_is_uppercase(test));
//	printf("%d", ft_str_is_printable(test));
//	printf("%s", ft_strcat(dest, test));
	printf("%s", ft_strncat(dest, test, b));
//	printf("%s", strncat(dest, test, b));
	return(0);
}
