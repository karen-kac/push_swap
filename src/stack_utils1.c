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

size_t	ft_find_target(t_stack *a, int nbr)
{
	size_t	i;

	i = 0;
	while (a)
	{
		if (a->value == nbr)
			return (i);
		i++;
		a = a->next;
	}
	return (SIZE_MAX);
}

int	ft_find_index(t_stack *a, int nbr)
{
	int		i;

	i = 0;
	while (a->value != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

int	ft_find_place_b(t_stack *b, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push > b->value && nbr_push < ft_stack_last(b)->value)
		i = 0;
	else if (nbr_push > ft_max_value(b) || nbr_push < ft_mini_value(b))
		i = ft_find_index(b, ft_max_value(b));
	else
	{
		tmp = b->next;
		while (b->value < nbr_push || tmp->value > nbr_push)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stack *a, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push < a->value && nbr_push > ft_stack_last(a)->value)
		i = 0;
	else if (nbr_push > ft_max_value(a) || nbr_push < ft_mini_value(a))
		i = ft_find_index(a, ft_mini_value(a));
	else
	{
		tmp = a->next;
		while (a->value > nbr_push || tmp->value < nbr_push)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}