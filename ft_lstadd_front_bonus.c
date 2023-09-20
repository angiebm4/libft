/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:07:38 by abarrio-          #+#    #+#             */
/*   Updated: 2023/09/20 13:29:45 by abarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*auxnode;
	
	if (!lst)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	auxnode = *lst;
	while (auxnode->next != NULL)
		auxnode = auxnode->next;
	auxnode->next = new;
}
