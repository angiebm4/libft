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

#include <stdlib.h>

char	*ft_strnstr(const char *text, const char *word, size_t len)
{
	/*size_t	i;
	size_t	aux;
	size_t	j;
	char 	*temp;

	temp = (char *)text;

	i = 0;
	if (word[i] == '\0')
		return(temp);
	while (text[i] != '\0' && i < len)
	{
		j = 0;
		if (text[i] == word[j])
		{
			aux = i;
			while (text[i] == word[j] && j < len && word[j] != '\0' && text[i] != '\0')
			{
				i++;
				j++;
			}
			if (((j + 1) == len || word[j] == '\0'))
				return (temp + aux + 1);
		}
		i++;
	}
	return (NULL);
	char	*tmp;
	int		count;

	tmp = (char *) word;
	while (*text != '\0' && *word != '\0' && len > 0)
	{
		count = 0;
		if (*text == *word)
		{
			while (*word != '\0' && (*word == text[count]))
			{
				word++;
				count++;
			}
		}
		if (*word != '\0')
		{
			word = tmp;
			text++;
		}
		len--;
	}
	if (*word == '\0')
		return ((char *)text);
	return (0);*/
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
	
