/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:03:05 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/18 15:56:44 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_substring(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	in_sub;

	i = 0;
	count = 0;
	in_sub = 0;
	while (s[i])
	{
		if (s[i] != c && in_sub == 0)
		{
			in_sub = 1;
			count += 1;
		}
		if (s[i] == c)
		{
			in_sub = 0;
		}
		i++;
	}
	return (count);
}

char	*ft_substring(char const *s, char c, size_t start)
{
	char	*sub;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[start + len] && s[start + len] != c)
	{
		len++;
	}
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	process_splits(char const *s, char c, char **result)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = ft_substring(s, c, start);
		if (result[j++] == NULL)
		{
			while (j > 0)
				free(result[--j]);
			return (0);
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (s == NULL)
	{
		return (NULL);
	}
	count = ft_count_substring(s, c);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (result == NULL)
	{
		return (NULL);
	}
	if (process_splits(s, c, result) == 0)
	{
		free(result);
		return (NULL);
	}
	return (result);
}
/*
int main(void)
{
	char const *test_str = "  YOO ON A GEREEEEE ENCORE HN ";
	char delimiter = ' ';
	char **result;

	result = ft_split(test_str, delimiter);

	if (result == NULL)
	{
		printf("ft_split returned NULL\n");
		return (1);
	}

	printf("Original string: \"%s\"\n", test_str);
	printf("Delimiter: '%c'\n", delimiter);
	printf("Split result:\n");

	int i = 0;
	while (result[i] != NULL)
	{
		printf("[%d]: \"%s\"\n", i, result[i]);
		i++;
	}

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);

	return (0);
}
*/
