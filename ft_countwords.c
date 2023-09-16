#include <stdio.h>

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			nb++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		while (s[i] == c)
			i++;
	}
	return (nb);
}

int	main(void)
{
	char const	str[]="   hola    que             tal  estas   ";

	printf("%d\n", ft_countwords(str, ' '));
	return (0);
}