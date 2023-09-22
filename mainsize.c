#include "libft.h"
#include <string.h>
#include "color.h"
#include <stdio.h>

int	main(void)
{
	t_list	*uwu;
	t_list	*owo;
	t_list	*ewe;
	t_list	*lista;
	lista = NULL;
	uwu = ft_lstnew("uwu");
	owo = ft_lstnew("owo");
	ewe = ft_lstnew("ewe");
	ft_lstadd_front(&lista, ewe);
	ft_lstadd_front(&lista, uwu);
	ft_lstadd_front(&lista, owo);
	printf("%d\n", ft_lstsize(lista));
	/*if (ft_lstsize(lista) != 4)
		return (0);*/
	return (0);
}