/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:21:35 by myokono           #+#    #+#             */
/*   Updated: 2025/01/26 15:04:49 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_sort_b(t_stack **a, t_stack **b)
{
	int		i;
	int		j;
	t_stack	*mini;

	ft_push(b, a, 0, 'b');
	ft_push(b, a, 0, 'b');
	while (ft_stack_size(*a) > 3 && ft_sort_check(*a) == -1)
	{
		mini = *a;
		j = 1;
		i = ft_cal_a_to_b(*a, *b, &j, &mini);
		while (i > -1)
		{
			if (j == 1)
				i = ft_rarb(a, b, mini->value, 'a');
			else if (j == 2)
				i = ft_rrarrb(a, b, mini->value, 'a');
			else if (j == 3)
				i = ft_rarrb(a, b, mini->value, 'a');
			else if (j == 4)
				i = ft_rrarb(a, b, mini->value, 'a');
		}
	}
	return ;
}

static void	ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	int		j;
	t_stack	*mini;

	while (*b)
	{
		mini = *b;
		j = 1;
		i = ft_cal_b_to_a(*a, *b, &j, &mini);
		while (i > -1)
		{
			if (j == 1)
				i = ft_rarb(a, b, mini->value, 'b');
			else if (j == 2)
				i = ft_rrarrb(a, b, mini->value, 'b');
			else if (j == 3)
				i = ft_rarrb(a, b, mini->value, 'b');
			else if (j == 4)
				i = ft_rrarb(a, b, mini->value, 'b');
		}
	}
	return ;
}

void	ft_sort_big(t_stack **a, t_stack **b)
{
	int		i;

	ft_sort_b(a, b);
	if (ft_sort_check(*a) == -1)
		ft_sort_three(a);
	ft_sort_a(a, b);
	i = ft_find_target(*a, ft_mini_value(*a));
	if (i < ft_stack_size(*a) / 2)
	{
		while ((*a)->value != ft_mini_value(*a))
			ft_rotate(a, 0, 'a');
	}
	else
	{
		while ((*a)->value != ft_mini_value(*a))
			ft_rrotate(a, 0, 'a');
	}
}
