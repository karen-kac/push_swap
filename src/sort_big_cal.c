/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_cal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:21:30 by myokono           #+#    #+#             */
/*   Updated: 2025/01/26 17:41:24 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_cal_rarb(t_stack *a, t_stack *b, int c, char s)
{
	int	i;

	if (s == 'a')
	{
		i = ft_push_b_to_a(a, c);
		if (i < ft_find_target(b, c))
			i = ft_find_target(b, c);
	}
	else
	{
		i = ft_push_a_to_b(b, c);
		if (i < ft_find_target(a, c))
			i = ft_find_target(a, c);
	}
	return (i);
}

int	ft_cal_rrarrb(t_stack *a, t_stack *b, int c, char s)
{
	int	i;

	i = 0;
	if (s == 'a')
	{
		if (ft_push_b_to_a(a, c))
			i = ft_stack_size(a) - ft_push_b_to_a(a, c);
		if ((i < (ft_stack_size(b) - ft_find_target(b, c))) \
			&& ft_find_target(b, c))
			i = ft_stack_size(b) - ft_find_target(b, c);
	}
	else
	{
		if (ft_push_a_to_b(b, c))
			i = ft_stack_size(b) - ft_push_a_to_b(b, c);
		if ((i < (ft_stack_size(a) - ft_find_target(a, c))) \
			&& ft_find_target(a, c))
			i = ft_stack_size(a) - ft_find_target(a, c);
	}
	return (i);
}

int	ft_cal_rrarb(t_stack *a, t_stack *b, int c, char s)
{
	int	i;

	i = 0;
	if (s == 'a')
	{
		if (ft_push_b_to_a(a, c))
			i = ft_stack_size(a) - ft_push_b_to_a(a, c);
		i = ft_find_target(b, c) + i;
	}
	else
	{
		if (ft_find_target(a, c))
			i = ft_stack_size(a) - ft_find_target(a, c);
		i = ft_push_a_to_b(b, c) + i;
	}
	return (i);
}

int	ft_cal_rarrb(t_stack *a, t_stack *b, int c, char s)
{
	int	i;

	i = 0;
	if (s == 'a')
	{
		if (ft_find_target(b, c))
			i = ft_stack_size(b) - ft_find_target(b, c);
		i = ft_push_b_to_a(a, c) + i;
	}
	else
	{
		if (ft_push_a_to_b(b, c))
			i = ft_stack_size(b) - ft_push_a_to_b(b, c);
		i = ft_find_target(a, c) + i;
	}
	return (i);
}
