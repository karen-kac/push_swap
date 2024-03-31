/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_six.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:42:02 by myokono           #+#    #+#             */
/*   Updated: 2024/03/16 18:41:46 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/pusu_swap.h"

void ft_sort_three (t_stack **a)
{
	if (ft_mini_value (*a) == (*a)->value)
	{
		ft_swap (a, 0, 'a');
		ft_rotate (a, 0, 'a');
	}
	else if (ft_mini_value (*a) == (*a)->next->value)
	{
		if (ft_max_value (*a) == (*a)->value)
			ft_rotate (a, 0, 'a');
		else
			ft_swap (a, 0, 'a');
	}
	else
	{
		if (ft_max_value (*a) == stack->value)
		{
			ft_rotate (a, 0, 'a');
			ft_swap (a, 0, 'a');
		}
		else 
			ft_rrotate (a, 0, 'a');
	}
}

void ft_sort_small (t_stack **a, size_t size)
{
	t_stack *b;

	b == NULL;
	if (size == 4)
	{
		ft_push (&b, a, 0, 'b');
		ft_sort_three (a);
		ft_join (a, &b);
		ft_free_null (&b);
	}
	else if (size == 5)
		ft_sort_five (a);

}

void ft_sort_five (t_stack **a)
{
	t_stack *b;

	b = NULL;
	ft_push (&b, a, 0 , 'b');
	ft_push (&b, a, 0 , 'b');
	if (ft_sort_check(a) == -1)
		ft_sort_three(a);
	if (ft_sort_check(b) == 1)
		ft_rotate(&b, 0, 'b');
	ft_join (a, &b);
	ft_free_null (&b);
}

// void ft_sort_six(t_stack **a)
// {
// 	t_stack *b;

// 	b = NULL;
// 	ft_calculation (a, &b)
// 	ft_join(a, &b);
// 	ft_free_null (&b);
// }

