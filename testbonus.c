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
	t_list	*ewe;
	t_list	*lista;
	t_list	*c_owo = ft_lstnew("owo");
	t_list	*c_uwu = ft_lstnew("uwu");
	t_list	*c_ewe = ft_lstnew("ewe");
	lista = NULL;
	uwu = ft_lstnew("uwu");
	owo = ft_lstnew("owo");
	ewe = ft_lstnew("ewe");
	ft_lstadd_front(&lista, ewe);
	ft_lstadd_front(&lista, uwu);
	if(lista->next->next != NULL)
	{
		printf("%s\n%p\n%p\n", lista->content, lista, lista->next);
		printf("%s\n%p\n", uwu->content, uwu);
		return (0);
	}
	ft_lstadd_front(&lista, owo);
	if(lista->next->next->content != c_ewe->content)
		return (0);
	if(lista->next->content != c_uwu->content)
		return (0);
	if(lista->content != c_owo->content)
		return (0);
	return (1);
}

int	test_lstsize(void)
{
	t_list	*uwu;
	t_list	*owo;
	t_list	*ewe;
	t_list	*lista;
	lista = NULL;
	
	//printf("%d\n", ft_lstsize(lista));
	uwu = ft_lstnew("uwu");
	owo = ft_lstnew("owo");
	ewe = ft_lstnew("ewe");
	ft_lstadd_front(&lista, ewe);
	ft_lstadd_front(&lista, uwu);
	ft_lstadd_front(&lista, owo);
	//printf("%d\n", ft_lstsize(lista));
	
	return (1);
}

int	test_lstlast(void)
{
	t_list	*uwu;
	t_list	*owo;
	t_list	*ewe;
	t_list	*lista;
	//t_list	*c_owo = ft_lstnew("owo");
	//t_list	*c_uwu = ft_lstnew("uwu");
	t_list	*c_ewe = ft_lstnew("ewe");
	lista = NULL;
	uwu = ft_lstnew("uwu");
	owo = ft_lstnew("owo");
	ewe = ft_lstnew("ewe");
	ft_lstadd_front(&lista, ewe);
	ft_lstadd_front(&lista, uwu);
	ft_lstadd_front(&lista, owo);
	//printf("%s\n", ft_lstlast(lista)->content);
	if (ft_lstlast(lista)->content != c_ewe->content)
		return (0);
	return (1);
}

int test_lstadd_back(void)
{
	t_list	*uwu;
	t_list	*owo;
	
	uwu = ft_lstnew("uwu");
	owo = ft_lstnew("owo");
	ft_lstadd_back(&uwu, owo);
	if((uwu->next != owo) || (owo->next != NULL))
		return (0);
	return (1);
}

/*int	ft_lstdelone(void)
{
	
}*/

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
	if (test_lstsize() == 1)
		printf("ft_lstsize %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_lstzize %sKO!%s\n", RED, CLEAR);
	if (test_lstlast() == 1)
		printf("ft_lstlast %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_lstlast %sKO!%s\n", RED, CLEAR);
	if (test_lstadd_back() == 1)
		printf("ft_lstadd_back %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_lsadd_back %sKO!%s\n", RED, CLEAR);
	/*if (test_lstdelone() == 1)
		printf("ft_lstdelone %sOK!%s\n", GREENFOSFI, CLEAR);
	else
		printf("ft_lstdelone %sKO!%s\n", RED, CLEAR);*/
	return (0);
}
