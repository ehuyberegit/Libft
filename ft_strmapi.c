/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:16:24 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/17 11:01:52 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char	*result;
	
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	upp_even(unsigned int index, char c)
{
	if (index % 2 == 0)
		return (ft_toupper(c));
	else
		return (c);
}

int main (void)
{
	char *test_str = "tranquilement poto";
	char *result = ft_strmapi(test_str, upp_even);
	
	printf("Original (1): %s\n", test_str);
	printf("Modified (1): %s\n", result);
	
	free(result);
	
	test_str = "";
	result = ft_strmapi(test_str, upp_even);
	
	printf("Original (empty): '%s'\n", test_str);
	printf("Modified (empty): '%s'\n", result);
	
	free(result);
	
	result = ft_strmapi(NULL, upp_even);
	
	printf("Result with NULL string: %s\n", (result == NULL ? "NULL (correct)" : "Not NULL (incorrect)"));
	
	return 0;
}
*/