/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:15:52 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/16 16:59:51 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n)
{
	long long	num;
	size_t		len;
	
	num = n;
	len = 0;
	if (num <= 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char		*result;
	long long	num;
	size_t		len;
	
	num = n;
	len = ft_numlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		result[0] = '0';
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
/*
int main(void)
{
    // Test cases array
    int test_values[] = {0, 1, -1, 42, -42, 2147483647, -2147483648, 123456, -123456};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    
    printf("===== TESTING FT_ITOA =====\n\n");
    
    for (int i = 0; i < num_tests; i++)
    {
        char *result = ft_itoa(test_values[i]);
        
        if (result == NULL)
        {
            printf("Test %d: ft_itoa(%d) returned NULL\n", i + 1, test_values[i]);
            continue;
        }
        
        printf("Test %d: Original int: %d\n", i + 1, test_values[i]);
        printf("        Result string: \"%s\"\n", result);
        
        printf("\n");
        
        // Don't forget to free the allocated memory
        free(result);
    }
    
    printf("===== TESTING COMPLETE =====\n");
    return (0);
}
*/

