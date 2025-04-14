/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:57:14 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/14 16:17:28 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*memory;

	len = 0;
	while (str[len])
	{
		len++;
	}
	memory = (char *)malloc(len + 1);
	if (memory == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		memory[i] = str[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);

	
}