/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_cal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 19:21:30 by myokono           #+#    #+#             */
/*   Updated: 2025/01/20 20:17:37 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_cal_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

int	ft_cal_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_stack_size(a) - ft_find_place_a(a, c);
	if ((i < (ft_stack_size(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = ft_stack_size(b) - ft_find_index(b, c);
	return (i);
}

int	ft_cal_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(b, c))
		i = ft_stack_size(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

int	ft_cal_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_stack_size(a) - ft_find_place_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}

int	ft_cal_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

int	ft_cal_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_stack_size(b) - ft_find_place_b(b, c);
	if ((i < (ft_stack_size(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_stack_size(a) - ft_find_index(a, c);
	return (i);
}


int	ft_cal_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_stack_size(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

// Again, this function makes similar calculations.
// This function do same calculations for ra+rrb cal.
int	ft_cal_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_stack_size(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_cal_rrarrb(a, b, a->value);
	while (tmp)
	{
		if (i > ft_cal_rarb(a, b, tmp->value))
			i = ft_cal_rarb(a, b, tmp->value);
		if (i > ft_cal_rrarrb(a, b, tmp->value))
			i = ft_cal_rrarrb(a, b, tmp->value);
		if (i > ft_cal_rarrb(a, b, tmp->value))
			i = ft_cal_rarrb(a, b, tmp->value);
		if (i > ft_cal_rrarb(a, b, tmp->value))
			i = ft_cal_rrarb(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_cal_rrarrb_a(a, b, b->value);
	while (tmp)
	{
		if (i > ft_cal_rarb_a(a, b, tmp->value))
			i = ft_cal_rarb_a(a, b, tmp->value);
		if (i > ft_cal_rrarrb_a(a, b, tmp->value))
			i = ft_cal_rrarrb_a(a, b, tmp->value);
		if (i > ft_cal_rarrb_a(a, b, tmp->value))
			i = ft_cal_rarrb_a(a, b, tmp->value);
		if (i > ft_cal_rrarb_a(a, b, tmp->value))
			i = ft_cal_rrarb_a(a, b, tmp->value);
		tmp = tmp->next;
	}
	return (i);
}
