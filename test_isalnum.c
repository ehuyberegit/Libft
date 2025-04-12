/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:02:21 by erwanhuyber       #+#    #+#             */
/*   Updated: 2025/04/12 09:58:18 by erwanhuyber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwanhuyberechts <erwanhuyberechts@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:05:00 by erwanhuyber       #+#    #+#             */
/*   Updated: 2025/04/11 19:05:00 by erwanhuyber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // Test uppercase letter
    printf("Testing 'A': ft_isalnum=%d, isalnum=%d\n", ft_isalnum('A'), isalnum('A'));
    
    // Test lowercase letter
    printf("Testing 'z': ft_isalnum=%d, isalnum=%d\n", ft_isalnum('z'), isalnum('z'));
    
    // Test digit
    printf("Testing '5': ft_isalnum=%d, isalnum=%d\n", ft_isalnum('5'), isalnum('5'));
    
    // Test special character
    printf("Testing '@': ft_isalnum=%d, isalnum=%d\n", ft_isalnum('@'), isalnum('@'));
    é
    // Test space
    printf("Testing ' ': ft_isalnum=%d, isalnum=%d\n", ft_isalnum(' '), isalnum(' '));
    
    // Test newline
    printf("Testing '\\n': ft_isalnum=%d, isalnum=%d\n", ft_isalnum('\n'), isalnum('\n'));
    
    return (0);
}