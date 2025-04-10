/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:00:43 by ehuybere          #+#    #+#             */
/*   Updated: 2025/03/09 14:41:05 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char str[] = "Gang gang gang";
	int	count;

	ft_strlen(str);
	count = ft_strlen(str);
	printf("count is %d \n", count);
	return 0;
}
*/