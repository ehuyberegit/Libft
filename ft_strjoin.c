/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:21:42 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/15 10:37:18 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*total_mem;
	
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	total_mem = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (total_mem == NULL)
	{
		return (NULL);
	}

	ft_memcpy(total_mem, s1, len_s1);
	ft_memcpy(total_mem + len_s1, s2, len_s2);
	total_mem[len_s1 + len_s2] = '\0';
	return (total_mem);
}