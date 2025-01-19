/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:07:56 by myokono           #+#    #+#             */
/*   Updated: 2025/01/17 15:28:22 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_stack_new(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->value = value;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_stack	*ft_stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}

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















