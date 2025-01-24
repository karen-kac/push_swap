/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:59:04 by myokono           #+#    #+#             */
/*   Updated: 2025/01/17 14:15:51 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_atoi2(const char *str)
{
	int		sign;
	long	num;

	sign = 1;
	num = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (sign * num > INT_MAX || sign * num < INT_MIN)
		return (-1);
	return (sign * num);
}

static int	ft_check_duplicate(t_stack *a, int nbr)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		if (tmp->value == nbr)
			return (-1);
		tmp = tmp->next;
	}
	return (0);
}

static int	ft_check_args(char *argv)
{
	int	i;

	if (!argv || !*argv)
		return (-1);
	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (-1);
		i++;
	}
	return (0);
}

static int	ft_stack(int start, int end, char **argv, t_stack **a)
{
	int	num;
	int	i;
	int	j;

	while (start < end)
	{
		i = ft_check_args(argv[start]);
		num = ft_atoi2(argv[start]);
		j = ft_check_duplicate(*a, num);
		if (i == -1 || num == -1 || j == -1)
			return (-1);
		ft_stack_add_back(a, ft_stack_new(num));
		start++;
	}
	return (0);
}

int	ft_create_stack(int argc, char **argv, t_stack **a)
{
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	if (argc < 2)
		exit(0);
	if (argc == 2)
	{
		if (!argv[1][0])
			return (-1);
		tmp = ft_split(argv[1], ' ');
		if (!tmp || !*tmp)
		{
			ft_free_double_pointer((void ***)&tmp);
			ft_error();
		}
		while (tmp[i])
			i++;
		j = ft_stack(0, i, tmp, a);
		ft_free_double_pointer((void ***)&tmp);
	}
	else
		j = ft_stack(1, argc, argv, a);
	return (j);
}
