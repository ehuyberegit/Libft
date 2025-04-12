/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:10:52 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/12 12:33:54 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t i;
	const char *temp_src;
	char *temp_dst;
	
	temp_src = (const char *)src;
	temp_dst = (char *)dst;
	if (dst == NULL || src == NULL)
	{
		return (dst);
	}
	if (size == 0)
	{
		return (dst);
	}
	i = 0;
	if (temp_dst > temp_src && temp_dst < temp_src + size)
	{
		i = size;
		while (i > 0)
		{
			i--;
			temp_dst[i] = temp_src[i];
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (temp_dst);
}