/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:39:23 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/12 11:31:18 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *mem, size_t size)
{
	size_t	i;
	char *temp;

	i = 0;
	temp = (char *)mem;
	while (i < size)
	{
		temp[i] = '\0';
		i++;
	}
}