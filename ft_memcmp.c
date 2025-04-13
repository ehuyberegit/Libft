/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 13:36:33 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/13 13:52:25 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *temp_s1;
	unsigned char *temp_s2;

	if (n == 0)
	{
		return (0);
	}
	temp_s1 = (unsigned char *) s1;
	temp_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if(temp_s1[i] == temp_s2[i])
		{
			i++;
		}
		else
		{
			return (temp_s1[i] - temp_s2[i]);
		}
	}
	return (0);
}