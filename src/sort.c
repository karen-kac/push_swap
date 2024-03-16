/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:30:50 by myokono           #+#    #+#             */
/*   Updated: 2024/03/15 16:46:37 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

int ft_sort_check(t_stack *stack)
{
	int value;

	value = stack->value;
	stack = stack->next;
	while (stack)
	{
		if (value > stack->value)
			return (-1);
		value = stack->value;
		stack = stack->next;
	}
	return (0);
}

void ft_sort (t_stack **a)
{
	size_t size;
	
	size = ft_lstsize(*a)
	if (size == 2)
		ft_rotate (a, 0, 'a');
	else if (size == 3)
		ft_sort_three(a);
	else if (size <= 5)
		ft_sort_small (a, size);
	else
		ft_sort_big (a);
}