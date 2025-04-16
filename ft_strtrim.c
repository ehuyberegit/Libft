/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:15:26 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/16 13:27:31 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	len;
	char *	result;

	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	if (set[0] == '\0')
	{
		return (ft_strdup(s1));
	}
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
	{
		end--;
	}
	if (end >= start)
	{
		len = end - start + 1;
	}
	else
	{
		len = 0;
	}
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (start <= end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);	
}
