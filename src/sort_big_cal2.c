/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_cal2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:04:22 by myokono           #+#    #+#             */
/*   Updated: 2025/01/26 15:05:26 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	init_cal_funcs(t_cal_func cal_funcs[], int is_a_to_b)
{
	if (is_a_to_b)
	{
		cal_funcs[0] = ft_cal_rarb;
		cal_funcs[1] = ft_cal_rrarrb;
		cal_funcs[2] = ft_cal_rarrb;
		cal_funcs[3] = ft_cal_rrarb;
	}
	else
	{
		cal_funcs[0] = ft_cal_rarb_a;
		cal_funcs[1] = ft_cal_rrarrb_a;
		cal_funcs[2] = ft_cal_rarrb_a;
		cal_funcs[3] = ft_cal_rrarb_a;
	}
}

int	ft_cal_a_to_b(t_stack *a, t_stack *b, int *j, t_stack **mini)
{
	int			i;
	int			k;
	t_stack		*tmp;
	t_cal_func	cal_funcs[4];

	init_cal_funcs(cal_funcs, 1);
	tmp = a;
	i = cal_funcs[0](a, b, a->value);
	while (tmp)
	{
		k = 0;
		while (k < 4)
		{
			if (i > cal_funcs[k](a, b, tmp->value))
			{
				i = cal_funcs[k](a, b, tmp->value);
				*mini = tmp;
				*j = k + 1;
			}
			k++;
		}
		tmp = tmp->next;
	}
	return (i);
}

int	ft_cal_b_to_a(t_stack *a, t_stack *b, int *j, t_stack **mini)
{
	int			i;
	int			k;
	t_stack		*tmp;
	t_cal_func	cal_funcs[4];

	init_cal_funcs(cal_funcs, 0);
	tmp = b;
	i = cal_funcs[0](a, b, b->value);
	while (tmp)
	{
		k = 0;
		while (k < 4)
		{
			if (i > cal_funcs[k](a, b, tmp->value))
			{
				i = cal_funcs[k](a, b, tmp->value);
				*mini = tmp;
				*j = k + 1;
			}
			k++;
		}
		tmp = tmp->next;
	}
	return (i);
}
