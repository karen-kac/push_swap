/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:24:02 by myokono           #+#    #+#             */
/*   Updated: 2025/01/19 14:16:47 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_stack_size(t_stack *stack)
{
	size_t	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

// int	ft_max_value(t_stack *stack)
// {
// 	t_stack	*current;
// 	t_stack	*max;

// 	if (!stack)
// 		return (NULL);
// 	max = stack;
// 	current = stack->next;
// 	while (current)
// 	{
// 		if (current->value > max->value)
// 			max = current;
// 		current = current->next;
// 	}
// 	return (max);
// }

// int	ft_mini_value(t_stack *stack)
// {
// 	t_stack	*current;
// 	t_stack	*min;

// 	if (!stack)
// 		return (NULL);
// 	min = stack;
// 	current = stack->next;
// 	while (current)
// 	{
// 		if (current->value < min->value)
// 			min = current;
// 		current = current->next;
// 	}
// 	return (min);
// }



t_stack	*ft_max_value(t_stack *stack)
{
	t_stack	*current;
	t_stack	*max;

	if (!stack)
		return (NULL); // 空スタックの場合はNULLを返す
	max = stack;
	current = stack->next;
	while (current)
	{
		if (current->value > max->value)
			max = current;
		current = current->next;
	}
	return (max);
}

t_stack	*ft_mini_value(t_stack *stack)
{
	t_stack	*current;
	t_stack	*min;

	if (!stack)
		return (NULL); // 空スタックの場合はNULLを返す
	min = stack;
	current = stack->next;
	while (current)
	{
		if (current->value < min->value)
			min = current;
		current = current->next;
	}
	return (min);
}
