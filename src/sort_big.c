/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:21:35 by myokono           #+#    #+#             */
/*   Updated: 2024/03/16 18:12:54 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

void ft_sort_big(t_stack **a)
{
	t_stack *b;

	b = NULL;
	ft_sort_b (a, &b);

	ft_join (a, &b);
	ft_free_null (&b);
}


int ft_push_atob(t_stack **b, int nbr)
{
	int i;
	int max;
	int min;
	t_stack *tmp;
	
	tmp  = *b;
	i = 0;
	max 
	if (nbr > (*b)->value &&nbr < ft_lstlast (*b)->value)
		retutn (0);
	else if (ft_max_value (*b) < nbr)
	{
		if ((*b)->value == ft_max_value (*b))
			return (0);
		
		while (tmp->value != )
		{
			i++;
		}
		return (i);
			
	}
	
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