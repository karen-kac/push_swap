/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:21:35 by myokono           #+#    #+#             */
/*   Updated: 2025/01/20 20:18:06 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_sort_b_sub(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (ft_stack_size(*a) > 3 && !ft_sort_check(*a))
	{
		tmp = *a;
		i = ft_rotate_type_ab(*a, *b);
		while (i >= 0)
		{
			if (i == ft_cal_rarb(*a, *b, tmp->value))
				i = ft_rarb(a, b, tmp->value, 'a');
			else if (i == ft_cal_rrarrb(*a, *b, tmp->value))
				i = ft_rrarrb(a, b, tmp->value, 'a');
			else if (i == ft_cal_rarrb(*a, *b, tmp->value))
				i = ft_rarrb(a, b, tmp->value, 'a');
			else if (i == ft_cal_rrarb(*a, *b, tmp->value))
				i = ft_rrarb(a, b, tmp->value, 'a');
			else
				tmp = tmp->next;
		}
	}
}

static void	ft_sort_b(t_stack **a, t_stack **b)
{
	if (ft_stack_size(*a) > 3 && ft_sort_check(*a) == -1)
		ft_push(b, a, 0, 'b');
	if (ft_stack_size(*a) > 3 && ft_sort_check(*a) == -1)
		ft_push(b, a, 0, 'b');
	if (ft_stack_size(*a) > 3 && ft_sort_check(*a) == -1)
		ft_sort_b_sub(a, b);
	return ;
}

static void	ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (*b)
	{
		tmp = *b;
		i = ft_rotate_type_ba(*a, *b);
		while (i >= 0)
		{
			if (i == ft_cal_rarb_a(*a, *b, tmp->value))
				i = ft_rarb(a, b, tmp->value, 'b');
			else if (i == ft_cal_rarrb_a(*a, *b, tmp->value))
				i = ft_rarrb(a, b, tmp->value, 'b');
			else if (i == ft_cal_rrarrb_a(*a, *b, tmp->value))
				i = ft_rrarrb(a, b, tmp->value, 'b');
			else if (i == ft_cal_rrarb_a(*a, *b, tmp->value))
				i = ft_rrarb(a, b, tmp->value, 'b');
			else
				tmp = tmp->next;
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
	i = ft_find_index(*a, ft_mini_value(*a));
	if (i < ft_stack_size(*a) - i)
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
