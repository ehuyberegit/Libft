/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:53:13 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/18 15:59:40 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (str1[i] && str1[i] == str2[i] && i < n - 1)
	{
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
