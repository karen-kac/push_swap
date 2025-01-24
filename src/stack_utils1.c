/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:21:51 by myokono           #+#    #+#             */
/*   Updated: 2025/01/20 20:05:11 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_stack_add_back(t_stack **stack, t_stack *new_stack)
{
	t_stack	*last;

	if (!stack || !new_stack)
		return ;
	if (!(*stack))
	{
		*stack = new_stack;
		return ;
	}
	last = ft_stack_last(*stack);
	last->next = new_stack;
	new_stack->prev = last;
}

int	ft_find_target(t_stack *stack, int num)
{
	int		i;

	i = 0;
	while (stack->value != num)
	{
		i++;
		stack = stack->next;
	}
	stack->index = 0;
	return (i);
}

int	ft_push_a_to_b(t_stack *b, int num)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (num > b->value && num < ft_stack_last(b)->value)
		i = 0;
	else if (num > ft_max_value(b) || num < ft_mini_value(b))
		i = ft_find_target(b, ft_max_value(b));
	else
	{
		tmp = b->next;
		while (b->value < num || tmp->value > num)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_push_b_to_a(t_stack *a, int num)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (num < a->value && num > ft_stack_last(a)->value)
		i = 0;
	else if (num > ft_max_value(a) || num < ft_mini_value(a))
		i = ft_find_target(a, ft_mini_value(a));
	else
	{
		tmp = a->next;
		while (a->value > num || tmp->value < num)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}
