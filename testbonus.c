#include "libft.h"
#include <string.h>
#include "color.h"
#include <stdio.h>

int	test_lstnew(void)
{
	char	str[]="UwU flecha ->";
	t_list	*node;

	node = ft_lstnew(str);
	if (strcmp (str,node->content) != 0)
		return (0);
	return (1);
}

int test_lstadd_front(void)
{
	t_list	*uwu;
	t_list	*owo;
	
	uwu = ft_lstnew("uwu");
	owo = ft_lstnew("owo");
	ft_lstadd_front(&uwu, owo);
	if(uwu->next != owo)
		return (0);
	return (1);
}

int test_lstadd_back(void)
{
	t_list	*uwu;
	t_list	*owo;
	
	uwu = ft_lstnew("uwu");
	owo = ft_lstnew("owo");
	ft_lstadd_front(&uwu, owo);
	if((uwu->next != owo) || (owo->next != NULL))
		return (0);
	return (1);
}

int	main(void)
{
	if (test_lstnew() == 1)
		printf("ft_lstnew %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_lstnew %sKO!%s\n", RED, CLEAR);
	if (test_lstadd_front() == 1)
		printf("ft_lstadd_front %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_lsadd_front %sKO!%s\n", RED, CLEAR);
	if (test_lstadd_back() == 1)
		printf("ft_lstadd_back %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_lsadd_back %sKO!%s\n", RED, CLEAR);
	return (0);
}
