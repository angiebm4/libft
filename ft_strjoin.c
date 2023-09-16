/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio- <abarrio-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:26:14 by abarrio-          #+#    #+#             */
/*   Updated: 2023/09/15 18:44:42 by abarrio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*substring;
	int		i;
	int		n;
	int		j;

	n = ft_strlen(s1) + ft_strlen(s2);
	substring = (char *)malloc((n + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i <= ft_strlen(s1) && s1[i] != '\0')
	{
		substring[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		substring[i] = s2[j];
		i++;
		j++;
	}
	substring[i] = '\0';
	return(substring);	
}