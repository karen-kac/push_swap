/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:26:32 by myokono           #+#    #+#             */
/*   Updated: 2025/01/19 14:06:56 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//pa(push a):b→a
//pb(push b):a→b
void	ft_push(t_stack **to, t_stack **from, int i, char ab)
{
	t_stack	*tmp;

	if (!*from)
		return ;
	tmp = *to;
	*to = *from;
	*from = (*from)->next;
	if (*from)
		(*from)->prev = NULL;
	if (tmp)
		tmp->prev = *to;
	(*to)->next = tmp ;
	if (i == 0 && ab == 'a')
		write(1, "pa\n", 3);
	if (i == 0 && ab == 'b')
		write(1, "pb\n", 3);
}

void	ft_rotate(t_stack **stack, int i, char ab)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = ft_stack_last(*stack);
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	first->prev = last;
	first->next = NULL;
	last->next = first;
	if (i == 0 && ab == 'a')
		write(1, "ra\n", 3);
	if (i == 0 && ab == 'b')
		write(1, "rb\n", 3);
}

void	ft_rrotate(t_stack **stack, int i, char ab)
{
	t_stack	*last;
	t_stack	*first;
	t_stack	*last_prev;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = ft_stack_last(*stack);
	last_prev = last->prev;
	last->prev = NULL;
	last->next = first;
	if (last_prev)
		last_prev->next = NULL;
	first->prev = last;
	*stack = last;
	if (i == 0 && ab == 'a')
		write (1, "rra\n", 4);
	if (i == 0 && ab == 'b')
		write (1, "rrb\n", 4);
}

void	ft_swap(t_stack **stack, int i, char ab)
{
	t_stack	*first;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = (*stack)->next;
	first->next = (*stack)->next;
	if (first->next)
		first->next->prev = first;
	(*stack)->next = first;
	first->prev = *stack;
	if (i == 0 && ab == 'a')
		write (1, "sa\n", 3);
	if (i == 0 && ab == 'b')
		write (1, "sb\n", 3);
}
