/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 14:05:52 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/13 14:57:41 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;
	size_t k;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (needle[i])
	{
		i++;
	}
	if (i > n)
	{
		return (NULL);
	}
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		k = i;
		while (haystack[i + j] == needle[j] && (i + j) < n)
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((char *)&haystack[k]);
			}
			if (haystack[i + j] == '\0')
			{
				break;
			}
		}
		i++;
	}
	return (NULL);
}

/*
int main (void)
{
	// Simple test cases
	const char *haystack = "Hello world";

	// Test 1: Find "world" in "Hello world"
	printf("Test 1: Find 'world' in '%s'\n", haystack);
	printf("Result: %s\n\n", ft_strnstr(haystack, "world", 11));
	
	// Test 2: Find "Hello" in "Hello world"
	printf("Test 2: Find 'Hello' in '%s'\n", haystack);
	printf("Result: %s\n\n", ft_strnstr(haystack, "Hello", 11));
	
	// Test 3: Try to find "world" but with limited length (too short)
	printf("Test 3: Find 'world' in '%s' but only search first 5 chars\n", haystack);
	printf("Result: %s\n\n", ft_strnstr(haystack, "world", 5) ? ft_strnstr(haystack, "world", 5) : "NULL");
	
	// Test 4: Find empty string
	printf("Test 4: Find '' (empty string) in '%s'\n", haystack);
	printf("Result: %s\n\n", ft_strnstr(haystack, "", 11));
	
	return 0;
}
*/