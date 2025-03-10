/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:42:02 by myokono           #+#    #+#             */
/*   Updated: 2025/01/18 16:44:54 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_stack **a)
{
	if (ft_mini_value (*a) == (*a)->value)
	{
		ft_swap (a, 0, 'a');
		ft_rotate (a, 0, 'a');
	}
	else if (ft_mini_value (*a) == (*a)->next->value)
	{
		if (ft_max_value (*a) == (*a)->value)
			ft_rotate (a, 0, 'a');
		else
			ft_swap (a, 0, 'a');
	}
	else
	{
		if (ft_max_value (*a) == (*a)->value)
		{
			ft_rotate (a, 0, 'a');
			ft_swap (a, 0, 'a');
		}
		else
			ft_rrotate (a, 0, 'a');
	}
}

void	ft_sort_four(t_stack **a, t_stack **b)
{
	int	b_num;

	ft_push (b, a, 0, 'b');
	b_num = (*b)->value;
	if (ft_sort_check(*a) == -1)
		ft_sort_three(a);
	if (ft_mini_value(*a) > b_num)
		ft_push (a, b, 0, 'a');
	else if (ft_max_value(*a) < b_num)
	{
		ft_push (a, b, 0, 'a');
		ft_rotate (a, 0, 'a');
	}
	else if ((*a)->value < b_num && (*a)->next->value > b_num)
	{
		ft_push (a, b, 0, 'a');
		ft_swap (a, 0, 'a');
	}
	else
	{
		ft_rrotate (a, 0, 'a');
		ft_push (a, b, 0, 'a');
		ft_rotate (a, 0, 'a');
		ft_rotate (a, 0, 'a');
	}
}
