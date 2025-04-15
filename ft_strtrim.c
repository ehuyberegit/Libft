/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:15:26 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/15 15:35:31 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t k;
	size_t len_s1;
	char *result;
	
	if (s1 == NULL)
	{
		return (NULL);
	}
	len_s1 = ft_strlen(s1);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (ft_strchr(s1, set[j] == NULL))
			{
				break;
			}
			j++;
		}
		i++;
	}
	k = len_s1;
	while (s1[len_s1 - k - 1])
	{
		j = 0;
		while (set[j])
		{
			if (ft_strchr(s1, set[j] == NULL))
			{
				break;
			}
			j++;
		}
		k--;
	}
	result = (char *)malloc((k - i + 1) * sizeof(char));
	j = 0;
	while (j > i && j < k)
	{
		ft_memcpy(result, s1, k - i)
	}
	return (result)
}