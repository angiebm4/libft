#include "libft.h"
#include <stdio.h>

int main()
{
	printf("~~~~~~ TRIM PLAYA ~~~~~~\n");

	char *str = "";
	char *set = "abcde ";
	char *trimado = ft_strtrim(str, set);

	printf("La trima: (%s)\n", trimado);
	return (0);
	
}