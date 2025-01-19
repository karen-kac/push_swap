/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 19:30:50 by myokono           #+#    #+#             */
/*   Updated: 2025/01/19 14:13:13 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

int	ft_sort_check(t_stack *a)
{
	t_stack	*current;

	if (!a)
		return (1);
	current = a;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

void	ft_sort(t_stack **a, t_stack **b)
{
	size_t	size;

	size = ft_stack_size(*a);

	if (size == 2)
		ft_rotate (a, 0, 'a');
	else if (size == 3)
		ft_sort_three(a);
	(void)b;
	// else if (size <= 5)
	// 	ft_sort_five (a, b, size);
	// else
	// 	ft_sort_big (a);
}
