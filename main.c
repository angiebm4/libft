#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char  str[]= "1Hola123sdfgsd123que1";
    const char  set[]= "123";

	printf("%s\n", ft_strtrim(str, set));
	return (1);
}