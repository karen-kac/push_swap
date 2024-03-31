/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:21:35 by myokono           #+#    #+#             */
/*   Updated: 2024/03/16 20:51:48 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

void ft_sort_big(t_stack **a)
{
	t_stack *b;

	b = NULL;
	ft_sort_b (a, &b);
	ft_push_back (a, &b); /////
	ft_free_null (&b);
}


void ft_sort_b (t_stack **a, t_stack **b)
{
	if (ft_sort_check(*a) == -1)
		ft_push (&b, a, 0 , 'b');
	if (ft_sort_check(*a) == -1)
		ft_push (&b, a, 0 , 'b');
	if (ft_lstsize (*a) > 3 && ft_sort_check (*a) == -1)
		ft_sort_b2 (a, b);
	if (ft_sort_check (*a) == -1)
		ft_sort_three (a);
}

int ft_push_atob(t_stack **b, int nbr)
{
	int max;
	int min;
	int i;
	
	i = 0;
	max = ft_max_value (*b);
	min = ft_mini_value (*b);
	if (nbr > (*b)->value && nbr < ft_lstlast (*b)->value)
		retutn (0);
	else if (max < nbr || min > nbr)
	{
		if ((*b)->value == max || ft_lstlast (*b)->value == min)
			return (0);
		return (ft_max_pointer (*b));	
	}
	while ((*b)->value < nbr || (*b)->prev->value > nbr)
		{
			(*b) = (*b)->next;
			i++;
		}
		return (i);
}

void ft_sort_b2 (t_stack **a, t_stack **b)
{
	int	i;
	i = ft_push_atob (b, )
	while (ft_lstsize (*a) > 3 && ft_sort_check (*a) == -1)
	{
		if (i == )
	}
}
////////////////////////////
int ft_calculation (t_stack **a, t_stack **b)
{
	int i;
	
	i = 0;
	

	return (i);
}