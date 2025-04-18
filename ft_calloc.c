/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:31:30 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/18 15:39:30 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	total_size;
	size_t	i;

	total_size = count * size;
	memory = (char *)malloc(total_size);
	if (memory == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < total_size)
	{
		memory[i] = '\0';
		i++;
	}
	return (&memory[0]);
}
