/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:31:36 by myokono           #+#    #+#             */
/*   Updated: 2025/01/17 15:43:22 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# nclude "../includes/push_swap.h"

void ft_join_simple(t_stack **a, t_stack **b)
{
	if (ft_mini_value (*a) != (*a)->value)
		ft_selsct_rl (a);
	if (ft_max_value(*b) != (*b)->value)
		
	while (*b)
		ft_push (a, b, 0, 'a');
}

void ft_selsct_rl (t_stack **a)
{
	int i;
	t_stack *tmp;

	i = 0;
	tmp = *a;
	while (ft_mini_value (*a) != tmp->value)
	{
		tmp = tmp->next; 
		i++;
	}
	i++;
	if (ft_lstsize(*a) >= (size_t)(2 * i))
	{
		while (ft_mini_value (*a) != (*a)->value)
			ft_rotate (a, 0, 'a');
	}
	else
	{
		while (ft_mini_value (*a) != (*a)->value)
			ft_rrotate (a, 0, 'a');
	}
}

void ft_join(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	while (*b)
	{
		tmp = ft_lstlast (*a);
		if (ft_max_value (*a) < ft_mini_value (*b))
			break;
		if (tmp->value < (*b)->value && (*a)->value > (*b)->value)
			ft_push (b, a, 0, 'a');
		else if (ft_mini_value (*a) == (*a)->value && (*a)->value < (*b)->value)
			ft_push (b, a, 0, 'a');
		else
			ft_rotate (a, 0, 'a');
	}
	while (*b)
		ft_join_simple (a, b);
	if (ft_mini_value (*a) != (*a)->value)
		ft_selsct_rl (a);
}