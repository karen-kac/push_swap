/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:21:15 by myokono           #+#    #+#             */
/*   Updated: 2025/01/20 19:43:06 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && ft_push_a_to_b(*b, c) > 0)
			ft_rr(a, b, 0);
		while ((*a)->value != c)
			ft_rotate(a, 0, 'a');
		while (ft_push_a_to_b(*b, c) > 0)
			ft_rotate(b, 0, 'b');
		ft_push(b, a, 0, 'b');
	}
	else
	{
		while ((*b)->value != c && ft_push_b_to_a(*a, c) > 0)
			ft_rr(a, b, 0);
		while ((*b)->value != c)
			ft_rotate(b, 0, 'b');
		while (ft_push_b_to_a(*a, c) > 0)
			ft_rotate(a, 0, 'a');
		ft_push(a, b, 0, 'a');
	}
	return (-1);
}

int	ft_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c && ft_push_a_to_b(*b, c) > 0)
			ft_rrr(a, b, 0);
		while ((*a)->value != c)
			ft_rrotate(a, 0, 'a');
		while (ft_push_a_to_b(*b, c) > 0)
			ft_rrotate(b, 0, 'b');
		ft_push(b, a, 0, 'b');
	}
	else
	{
		while ((*b)->value != c && ft_push_b_to_a(*a, c) > 0)
			ft_rrr(a, b, 0);
		while ((*b)->value != c)
			ft_rrotate(b, 0, 'b');
		while (ft_push_b_to_a(*a, c) > 0)
			ft_rrotate(a, 0, 'a');
		ft_push(a, b, 0, 'a');
	}
	return (-1);
}

int	ft_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			ft_rrotate(a, 0, 'a');
		while (ft_push_a_to_b(*b, c) > 0)
			ft_rotate(b, 0, 'b');
		ft_push(b, a, 0, 'b');
	}
	else
	{
		while (ft_push_b_to_a(*a, c) > 0)
			ft_rrotate(a, 0, 'a');
		while ((*b)->value != c)
			ft_rotate(b, 0, 'b');
		ft_push(a, b, 0, 'a');
	}
	return (-1);
}

int	ft_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->value != c)
			ft_rotate(a, 0, 'a');
		while (ft_push_a_to_b(*b, c) > 0)
			ft_rrotate(b, 0, 'b');
		ft_push(b, a, 0, 'b');
	}
	else
	{
		while (ft_push_b_to_a(*a, c) > 0)
			ft_rotate(a, 0, 'a');
		while ((*b)->value != c)
			ft_rrotate(b, 0, 'b');
		ft_push(a, b, 0, 'a');
	}
	return (-1);
}
