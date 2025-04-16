/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:33:48 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/16 13:27:41 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*mem_sub;

	if (s == NULL)
	{
		return (NULL);
	}
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		mem_sub = (char *)malloc(1);
		if (mem_sub == NULL)
		{
			return (NULL);
		}
		mem_sub[0] = '\0';
		return (mem_sub);
	}
	if (len > s_len - start)
	{
		len = s_len - start;
	}
	mem_sub = (char *)malloc(len + 1);
	if (mem_sub == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		mem_sub[i] = s[start + i];
		i++;
	}
	mem_sub[i] = '\0';
	return (mem_sub);
}
