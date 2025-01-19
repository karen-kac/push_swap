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
		ft_error();
	return (sign * num);
}

static void	ft_check_duplicate(t_stack *a, int nbr)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp)
	{
		if (tmp->value == nbr)
			ft_error();
		tmp = tmp->next;
	}
}

static void	ft_check_args(char *argv)
{
	int	i;

	if (!argv || !*argv)
		ft_error();
	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i++;
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			ft_error();
		i++;
	}
}

static void	ft_stack(int start, int end, char **argv, t_stack **a)
{
	int	num;

	while (start < end)
	{
		ft_check_args(argv[start]);
		num = ft_atoi2(argv[start]);
		ft_check_duplicate(*a, num);
		ft_stack_add_back(a, ft_stack_new(num));
		start++;
	}
}

int	ft_create_stack(int argc, char **argv, t_stack **a)
{
	char	**tmp;
	int		i;

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
		ft_stack(0, i, tmp, a);
		ft_free_double_pointer((void ***)&tmp);
	}
	else
		ft_stack(1, argc, argv, a);
	return (0);
}
