/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:15:12 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/18 15:41:24 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*temp_str;
	size_t			i;

	temp_str = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (temp_str[i] == (unsigned char)c)
		{
			return (&temp_str[i]);
		}
		i++;
	}
	return (NULL);
}
