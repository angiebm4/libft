/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:55:45 by abarrio-          #+#    #+#             */
/*   Updated: 2023/09/20 18:47:23 by abarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int	test_isalpha(void)
{
	if (ft_isalpha('x') != isalpha('x'))
		return (0);
	if (ft_isalpha('Z') != isalpha('Z'))
		return (0);
	if (ft_isalpha(':') != isalpha(':'))
		return (0);
	if (ft_isalpha('8') != isalpha('8'))
		return (0);
	return (1);
}

int	test_isdigit(void)
{
	if (ft_isdigit('x') != isdigit('x'))
		return (0);
	if (ft_isdigit('0') != isdigit('0'))
		return (0);
	if (ft_isdigit(' ') != isdigit(' '))
		return (0);
	return (1);
}

int	test_isalnum(void)
{
	if (ft_isalnum('f') != isalnum('f'))
		return (0);
	if (ft_isalnum('Z') != isalnum('Z'))
		return (0);
	if (ft_isalnum(':') != isalnum(':'))
		return (0);
	if (ft_isalnum('9') != isalnum('9'))
		return (0);
	return (1);
}

int	test_isascii(void)
{
	if (ft_isascii('f') != isascii('f'))
		return (0);
	if (ft_isascii('@') != isascii('@'))
		return (0);
	if (ft_isascii(':') != isascii(':'))
		return (0);
	if (ft_isascii('\n') != isascii('\n'))
		return (0);
	return (1);
}

int	test_isprint(void)
{
	if (ft_isprint('f') != isprint('f'))
		return (0);
	if (ft_isprint('@') != isprint('@'))
		return (0);
	if (ft_isprint(' ') != isprint(' '))
		return (0);
	if (ft_isprint('\n') != isprint('\n'))
		return (0);
	return (1);
}

int	test_strlen(void)
{
	if (ft_strlen("uwu") != strlen("uwu"))
		return (0);
	if (ft_strlen("42") != strlen("42"))
		return (0);
	if (ft_strlen("Hola, que tal? Luis") != strlen("Hola, que tal? Luis"))
		return (0);
	return (1);
}

int	test_memset(void)
{
	char	str[] = "uwuowo";
	char	str1[] = "uwuowo";
	char	str2[] = "11111111111";
	char	str3[] = "11111111111";

	memset(str1, 'A', 2);
	ft_memset(str, 'A', 2), memset(str1, 'A', 2);
	if (strcmp(str, str1) != 0)
		return (0);
	ft_memset(str2, 'a', 11);
	memset(str3, 'a', 11);
	if (strcmp(str2, str3) != 0)
		return (0);
	return (1);
}

int	test_bzero(void)
{
	char	str[]= "uwuowo";
	char	str1[]= "uwuowo";
	char	str2[]= "11111111111";
	char	str3[]= "11111111111";

	ft_bzero(str, 2);
	bzero(str1, 2);
	if (strcmp(str, str1) != 0)
		return (0);
	ft_bzero(str2, 11);
	bzero(str3, 11);
	if (strcmp(str2, str3) != 0)
		return (0);
	return (1);
}

int	test_memcpy(void)
{
	char	str[50] = "ostia putaa aaaa";
	char	str1[50] = "";
	char	str2[50] = "";

	ft_memcpy(str1, str, 50);
	memcpy(str2, str, 50);
	if (strcmp(str1, str2) != 0)
		return (0);
	return (1);
}

int	test_memmove(void)
{
	char	str1[50];
	char	str2[50];
	char	*str1_villano = str1 + 5;
	char	*str2_villano = str2 + 5;
	char	*str1_villano2 = str1_villano - 2;
	char	*str2_villano2 = str2_villano - 2;

	strcpy(str1_villano, "nah nena de locos");
	strcpy(str2_villano, "nah nena de locos");

	ft_memmove(str1_villano2, str1_villano, 5);
	memmove(str2_villano2, str2_villano, 5);
	if (strcmp(str1_villano2, str2_villano2) != 0)
		return (0);
	return (1);
}

int	test_strlcpy(void)
{
	const char	src[]="123456789";
	char		dest[]="uwu";
	char		dest1[]="uwu";

	if (ft_strlcpy(dest, src, 3) != strlcpy(dest1, src, 3))
		return (0);
	return (1);
}

int	test_strlcat(void)
{
	const char	src[]="lorem ipsum dolor sit amet";
	char		dest[50]="";
	char		dest2[50]="";
	char		dest1[]="ubyihuiuwu";
	char		dest3[]="ubyihuiuwu";


	if (ft_strlcat(dest, src, 5) != strlcat(dest2, src, 5))
		return (0);
	if (ft_strlcat(dest1, src, 2) != strlcat(dest3, src, 2))
		return (0);
	return (1);
}

int	test_toupper(void)
{
	int	a;
	int	a1;
	int	s;
	int	s1;

	a = 'L';
	a1 = 'L';
	s = 'z';
	s1 = 'z';
	a = ft_toupper(a);
	a1 = toupper(a1);
	if (a != a1)
		return (0);
	s = ft_toupper(s);
	s1 = toupper(s1);
	if (s != s1)
		return (0);
	return (1);
}

int	test_tolower(void)
{
	int	a;
	int	a1;
	int	s;
	int	s1;

	a = 'A';
	a1 = 'A';
	s = 'k';
	s1 = 'k';
	a = ft_tolower(a);
	a1 = tolower(a1);
	if (a != a1)
		return (0);
	s = ft_tolower(s);
	s1 = tolower(s1);
	if (s != s1)
		return (0);
	return (1);
}

int	test_strchr(void)
{
	char	str[]="ewe";
    
	if (ft_strchr(str, 'w') != strchr(str, 'w'))
		return (0);
	if (ft_strchr(str, 'y') != strchr(str, 'y'))
		return (0);
	return (1);
}

int	test_strrchr(void)
{
	char	*str = "uwwwtrr wu";

	if (ft_strrchr(str, 'w') != strrchr(str, 'w'))
		return (0);
	if (ft_strrchr(str, 'y') != strrchr(str, 'y'))
		return (0);
	str = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	if (ft_strrchr(str, '\0') != strrchr(str, '\0'))
		return (0);
	return (1);
}

int	test_strncmp(void)
{
	const char	str[]= "test\200";
	const char	str1[]= "test\0";
	const char	str2[]= "1234567890 uwu";
	const char	str3[]= "1234567890 owo";

	if (ft_strncmp(str, str1, 7) != strncmp(str, str1, 7))
	{
		printf("%d\n%d\n",ft_strncmp(str, str1, 3), strncmp(str, str1, 3));
		return (0);
	}
	if ((ft_strncmp(str2, str3, 12) <= 0) && (strncmp(str2, str3, 12) >= 0))
		return (0);
	if (ft_strncmp(str2, str3, 0) != strncmp(str2, str3, 0))
		return (0);
	return (1);
}

int	test_memchr(void)
{
	char	str[]="jgcjksah0sddsd0";

	if (ft_memchr(str, '0', 20) != memchr(str, '0', 20))
		return (0);
	if (ft_memchr(str, '0', 3) != memchr(str, '0', 3))
		return (0);
	if (ft_memchr(str, 'j', 3) != memchr(str, 'j', 3))
		return (0);
	return (1);
}

int	test_memcmp(void)
{
	const char	str[]= "Luis es putoooo";
	const char	str2[]= "Luis es putaaaa";

	if (ft_memcmp(str, str2, 5) != memcmp(str, str2, 5))
		return (0);
	if (ft_memcmp(str, str2, 12) != memcmp(str, str2, 12))
		return (0);
	return (1);
}

int	test_strnstr(void)
{
	const char	text[]= "HolHolaa que tal estas";
	const char	word[]= "tal estas";
	const char	word2[]= "111111111tal estas11111111111111111111111";
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	if (ft_strnstr(text, word, 15) != strnstr(text, word, 15))
	{
		printf("1%s\n%s\n", ft_strnstr(text, word, 15), strnstr(text, word, 15));
		return (0);
	}
	if (ft_strnstr(text, word, 5) != strnstr(text, word, 5))
	{
		printf("2%s\n%s\n", ft_strnstr(text, word, 5), strnstr(text, word, 5));
		return (0);
	}
	if (ft_strnstr(text, word2, 15) != strnstr(text, word2, 15))
	{
		printf("3%s\n%s\n", ft_strnstr(text, word2, 15), strnstr(text, word2, 15));
		return (0);
	}
	if (ft_strnstr(haystack, needle, -1) != strnstr(haystack, needle, -1))
	{
		printf("4%s\n%s\n", ft_strnstr(haystack, needle, -1), strnstr(haystack, needle, -1));
		return (0);
	}
	return (1);
}
int	test_atoi(void)
{
	const char str[]="	    -22dfd";
	const char str1[]="as22dfd";
	const char str2[]="2631 6819jkhfhk df shf";
	const char str3[]="	    -+-+-22dfd";

	if (ft_atoi(str) != atoi(str))
		return (0);
	if (ft_atoi(str1) != atoi(str1))
		return (0);
	if (ft_atoi(str2) != atoi(str2))
		return (0);
	if (ft_atoi(str3) != atoi(str3))
		return (0);
	return (1);
}

int	test_calloc(void)
{
	if (memcmp(ft_calloc(10, sizeof(int)), calloc(10, sizeof(int)), 40) != 0)
		return (0);
	if (memcmp(ft_calloc(900, sizeof(char)), calloc(900, sizeof(char)), 900) != 0)
		return (0);
	if (memcmp(ft_calloc(10,0), calloc(10, 0), 0) != 0)
		return (0);
	/*char *str1 = calloc(SIZE_MAX, 0);
	char *str2 = ft_calloc(SIZE_MAX, 0);
	printf("calloc vale %s\n", str1);
	printf("ft_calloc vale %s\n", str2);*/
	return (1);	
}

int	test_strdup(void)
{
	const char	src[]="UwU OwO AwA";
	const char	src1[]="UwU OwO AwA";
	if (memcmp(ft_strdup(src), strdup(src1), 12) != 0)
		return (0);
	return (1);	
}

int	test_substr(void)
{
	/*char const		s[]="Me llamo Angela Barrio";	
	
	if (ft_substr(s, 0, 0) != ft_strdup(""))
		return (0);*/
	return (1);
}

int	test_strjoin(void)
{
	//char	s1[]="Hola";
	//char	s2[]="Dani";

	//printf("%s\n", ft_strjoin(s1, s2));
	return (1);
}
int	test_strtrim(void)
{
	/*char *ft_trim;
	
	{
		const char  str[]= "sssss";
	    const char  set[]= "sfgsdfgs";

		ft_trim = ft_strtrim(str, set);
		if (!strcmp("", ft_trim))
			printf("epic\n");
		else
			printf("epicn't: (%s)\n", ft_trim);
	}
	{
		const char	str[] = "";
		const char	set[] = "holaquepasaquetal";

		ft_trim = ft_strtrim(str, set);
		if (!strcmp("", ft_trim))
			printf("epic\n");
		else
			printf("epicn't: (%s)\n", ft_trim);
	}
	{
		const char	str[] = "holaquepasaquetal";
		const char	set[] = "";

		ft_trim = ft_strtrim(str, set);
		if (!strcmp("holaquepasaquetal", ft_trim))
			printf("epic\n");
		else
			printf("epicn't: (%s)\n", ft_trim);
	}
	{
		const char 	str[] = "       hola       quetal\t\nbarralloquesea ,  \n";
		const char	set[] = "\n ";

		ft_trim = ft_strtrim(str, set);
		if (!strcmp("hola       quetal\t\nbarralloquesea ,", ft_trim))
			printf("epic\n");
		else
			printf("epicn't: (%s)\n", ft_trim);
	}
	{
		const char 	str[] = "abababbaahola       quetal\t\nbarralloqueseababab";
		const char	set[] = "ab";

		ft_trim = ft_strtrim(str, set);
		if (!strcmp("hola       quetal\t\nbarralloquese", ft_trim))
			printf("epic\n");
		else
			printf("epicn't: (%s)\n", ft_trim);
		
	}*/
	return 1;
}

int	test_split(void)
{
	//const char	str[]="  Hola   que         tal estas uwu  ";
	//const char	str1[]=" Hola que tal estas";
	//const char	str2[]="111111111";
	//char		**uwu = ft_split(str, ' ');
	//int 		x = 0;
	
	
	/*while(uwu[x])
	{
		printf("%s\n", uwu[x]);
		x++;
	}*/
	return(1);
}

int	test_itoa(void)
{
	//int n = -2147483648;

    //printf("%s\n", ft_itoa(n));
	return (1);
}

/*static char	f(unsigned int n, char str)
{
	if ((n % 2) == 0)
		return ('2');
	return (str);
}*/

int	test_strmapi(void)
{
	//char const str[]= "uwu owo";

    //printf("%s\n", ft_strmapi(str, f));
	return (1);
}

int	test_striteri(void)
{
	return (1);
}

int	test_putchar_fd(void)
{
	char    c = '9';
    int     fd= open("uwu.txt", O_WRONLY);

    ft_putchar_fd(c, fd);
	return (1);
}

int	test_putstr_fd(void)
{
	char    *c = "uwu owo ewe";
    int     fd= open("uwu.txt", O_WRONLY);
	
    ft_putstr_fd(c, fd);
	return (1);
}

int	test_putendl_fd(void)
{
	char    *c = "uwu owo ewe";
    int     fd= open("uwu.txt", O_WRONLY);

    ft_putendl_fd(c, fd);
	return (1);
}

int	test_putnbr_fd(void)
{
	int nb = -5435435;
    int fd= open("uwu.txt", O_WRONLY);

    ft_putnbr_fd(nb, fd);
	return (1);
}

int	main(void)
{
	if (test_isalpha() == 1)
		printf("ft_isalpha %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_isalpha %sKO!%s\n", RED, CLEAR);
	if (test_isdigit() == 1)
		printf("ft_isdigit %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_isdigit %sKO!%s\n", RED, CLEAR);
	if (test_isalnum() == 1)
		printf("ft_isalnum %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_isalnum %sKO!%s\n", RED, CLEAR);
	if (test_isascii() == 1)
		printf("ft_isascii %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_isascii %sKO!%s\n", RED, CLEAR);
	if (test_isprint() == 1)
		printf("ft_isprint %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_isprint %sKO!%s\n", RED, CLEAR);
	if (test_strlen() == 1)
		printf("ft_strlen %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_strlen %sKO!%s\n", RED, CLEAR);
	if (test_memset() == 1)
		printf("ft_memset %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_memset %sKO!%s\n", RED, CLEAR);
	if (test_bzero() == 1)
		printf("ft_bzero %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_bzero %sKO!%s\n", RED, CLEAR);
	if (test_memcpy() == 1)
		printf("ft_memcpy %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_memcpy %sKO!%s\n", RED, CLEAR);
	if (test_memmove() == 1)
		printf("ft_memmove %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_memmove %sKO!%s\n", RED, CLEAR);
	if (test_strlcpy() == 1)
		printf("ft_strlcpy %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_strlcpy %sKO!%s\n", RED, CLEAR);
	if (test_strlcat() == 1)
		printf("ft_strlcat %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_strlcat %sKO!%s\n", RED, CLEAR);
	if (test_toupper() == 1)
		printf("ft_toupper %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_toupper %sKO!%s\n", RED, CLEAR);
	if (test_tolower() == 1)
		printf("ft_tolower %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_tolower %sKO!%s\n", RED, CLEAR);
	if (test_strchr() == 1)
		printf("ft_strchr %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_strchr %sKO!%s\n", RED, CLEAR);
	if (test_strrchr() == 1)
		printf("ft_strrchr %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_strrchr %sKO!%s\n", RED, CLEAR);
	if (test_strncmp() == 1)
		printf("ft_strncmp %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_strncmp %sKO!%s\n", RED, CLEAR);
	if (test_memchr() == 1)
		printf("ft_memchr %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_memchr %sKO!%s\n", RED, CLEAR);
	if (test_memcmp() == 1)
		printf("ft_memcmp %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_memcmp %sKO!%s\n", RED, CLEAR);
	if (test_strnstr() == 1)
		printf("ft_strnstr %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_strnstr %sKO!%s\n", RED, CLEAR);
	if (test_atoi() == 1)
		printf("ft_atoi %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_atoi %sKO!%s\n", RED, CLEAR);
	if (test_calloc() == 1)
		printf("ft_calloc %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_calloc %sKO!%s\n", RED, CLEAR);
	if (test_strdup() == 1)
		printf("ft_strdup %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_strdup %sKO!%s\n", RED, CLEAR);
	if (test_substr() == 1)
		printf("ft_substr %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_substr %sKO!%s\n", RED, CLEAR);
	if (test_strjoin() == 1)
		printf("ft_strjoin %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_strjoin %sKO!%s\n", RED, CLEAR);
	if (test_strtrim() == 1)
		printf("ft_strtrim %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_strtrim %sKO!%s\n", RED, CLEAR);
	if (test_split() == 1)
		printf("ft_split %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_split %sKO!%s\n", RED, CLEAR);
	if (test_itoa() == 1)
		printf("ft_itoa %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_itoa %sKO!%s\n", RED, CLEAR);
	if (test_split() == 1)
		printf("ft_strmapi %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_strmapi %sKO!%s\n", RED, CLEAR);
	if (test_striteri() == 1)
		printf("ft_striteri %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_striteri %sKO!%s\n", RED, CLEAR);
	if (test_putchar_fd() == 1)
		printf("ft_putchar_fd %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_putchar_fd %sKO!%s\n", RED, CLEAR);
	if (test_putstr_fd() == 1)
		printf("ft_putstr_fd %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_putstr_fd %sKO!%s\n", RED, CLEAR);
	if (test_putendl_fd() == 1)
		printf("ft_putendl_fd %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_putendl_fd %sKO!%s\n", RED, CLEAR);
	if (test_putnbr_fd() == 1)
		printf("ft_putnbr_fd %sSABES QUE NO ESTA BIEN EL TEST UWU!%s\n", MORADO, CLEAR);
	else
		printf("ft_putnbr_fd %sKO!%s\n", RED, CLEAR);
}