/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:51:23 by abarrio-          #+#    #+#             */
/*   Updated: 2023/09/16 19:34:07 by abarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
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
		while (s[i] != '\0' && s[i] == c)
			i++;
	}
	return (nb);
}

char **ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	int		x;
	int		principle;
	int		nb;
	int		len;
	
	nb = ft_countwords(s, c);
	result = (char **)malloc((nb + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	x = -1;
	while (++x < nb || s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		principle = i;
		while (s[i] != '\0' && s[i] != c)
		{
			len = 0;
			while (s[i] != c && s[i] != '\0')
			{
				len++;
				i++;
			}
			result[x] = ft_substr(s, principle, len);
			principle = i + 1;
		}
	}
	result[x] = NULL;
	return(result);
}