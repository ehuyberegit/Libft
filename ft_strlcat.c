/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:28:07 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/18 13:57:09 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = 0;
	src_size = 0;
	if (size == 0)
		return (ft_strlen(src));
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size >= size)
		return (size + src_size);
	i = 0;
	while (i < size - dst_size - 1 && src[i] != '\0')
	{
		dst [dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
