/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:07:56 by myokono           #+#    #+#             */
/*   Updated: 2024/03/08 23:19:27 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *ft_lstlast(t_stack *stack)
{
	if (!stack->next)
			return (NULL);
	while (stack)
		stack = stack->next;
	return (stack);
}

void ft_add_back (t_stack **stack, t_stack *new_stack)
{
	t_stack *last;

	last = ft_lstlast(*stack);
	if (!stack)
		return;
	if (!(*stack))
		*stack = new_stack;
	else
	{
		last->next = new_stack;
		last->next->prev = last;
	}
}

size_t ft_lstsize (t_stack *stack)
{
	size_t i;
	
	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}