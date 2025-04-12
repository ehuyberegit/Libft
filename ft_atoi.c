/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehuybere <ehuybere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:01:31 by ehuybere          #+#    #+#             */
/*   Updated: 2025/04/12 10:02:45 by ehuybere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_skip(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
	{
		i ++;
	}
	return (i);
}

int	ft_sign(char *str, int *i)
{
	int	count_neg;

	count_neg = 0;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			count_neg += 1;
		}
		(*i)++;
	}
	return (count_neg);
}

int	ft_atoi(char *str)
{
	int	i;
	int	count_neg;
	int	result;

	i = 0;
	count_neg = 0;
	result = 0;
	i = ft_skip(str);
	count_neg = ft_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (count_neg % 2 == 1)
	{
		result = -result;
	}
	return (result);
}

/*
int	main(void)
{
	ft_atoi("  	---+--+1234ab567");
	return (0);
}
*/