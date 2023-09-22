/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_textntext.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:53:57 by abarrio-          #+#    #+#             */
/*   Updated: 2023/09/14 21:47:41 by abarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *text, const char *word, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	if (!word[0])
		return ((char *)text);
	while (text[i] && i < len)
	{
		if (text[i] == word[0])
		{
			j = 0;
			while (word[j] == text[i + j] && (i + j) < len)
			{
				if (word[j + 1] == '\0')
					return ((char *)&text[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
	
