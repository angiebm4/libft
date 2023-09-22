/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:08:03 by abarrio-          #+#    #+#             */
/*   Updated: 2023/09/21 17:33:03 by abarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
	{
		str = ft_calloc(1, sizeof(char));
		if (str == NULL)
        	return (NULL);
		return (str);
	}
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	while (ft_strchr(set, s1[j]) && s1[i] > 0)
		j--;
	count = j - i + 1;
	if (j < i)
	{
		str = (char *)calloc(1, sizeof(char));
		if (str == NULL)
        	return (NULL);
		return (str);
	}
	str = ft_substr(s1, i, count);
	return (str);
}