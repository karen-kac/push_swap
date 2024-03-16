/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:56:24 by myokono           #+#    #+#             */
/*   Updated: 2024/03/08 19:04:16 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

int ft_atoi2(const char *str)
{
	int			sign;
	long int	num;

	sign = 1
	num = 0;
	while (*str == ' ' || (*str == '\t' <= *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		if (!('0' <= *str <= '9'))
			ft_error();
		num = num *10 + (*str - '0');
		str++;
	}
	if(sign * num > INT_MAX || sign * num < INT_MINI)
		ft_error();
	return (sign * num);
}

int	ft_count_words(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}
