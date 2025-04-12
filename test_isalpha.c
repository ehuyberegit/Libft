/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:51:35 by erwanhuyber       #+#    #+#             */
/*   Updated: 2025/04/11 18:51:36 by erwanhuyber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // Test uppercase
    printf("Testing 'A': ft_isalpha=%d, isalpha=%d\n", ft_isalpha('A'), isalpha('A'));
    
    // Test lowercase
    printf("Testing 'z': ft_isalpha=%d, isalpha=%d\n", ft_isalpha('z'), isalpha('z'));
    
    // Test digit
    printf("Testing '5': ft_isalpha=%d, isalpha=%d\n", ft_isalpha('5'), isalpha('5'));
    
    // Test special character
    printf("Testing '@': ft_isalpha=%d, isalpha=%d\n", ft_isalpha('@'), isalpha('@'));
    
    return (0);
}