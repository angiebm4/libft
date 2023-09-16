#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char	str[]=" Hola que tal estas uwu";
	//const char	str1[]=" Hola que tal estas";
	//const char	str2[]="111111111";
	char		**uwu = ft_split(str, ' ');
	int 		x = 0;
	
	while(uwu[x])
	{
		printf("%s\n", uwu[x]);
		x++;
	}
	return(1);
}