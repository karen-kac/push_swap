/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_cal2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 15:04:22 by myokono           #+#    #+#             */
/*   Updated: 2025/01/26 17:41:45 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	init_cal_funcs(t_cal_func cal_funcs[])
{
	cal_funcs[0] = ft_cal_rarb;
	cal_funcs[1] = ft_cal_rrarrb;
	cal_funcs[2] = ft_cal_rarrb;
	cal_funcs[3] = ft_cal_rrarb;
}

int	ft_cal_a_to_b(t_stack *a, t_stack *b, int *j, t_stack **mini)
{
	int			i;
	int			k;
	t_stack		*tmp;
	t_cal_func	cal_funcs[4];

	init_cal_funcs(cal_funcs);
	tmp = a;
	i = cal_funcs[0](a, b, a->value, 'b');
	while (tmp)
	{
		k = 0;
		while (k < 4)
		{
			if (i > cal_funcs[k](a, b, tmp->value, 'b'))
			{
				i = cal_funcs[k](a, b, tmp->value, 'b');
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

	init_cal_funcs(cal_funcs);
	tmp = b;
	i = cal_funcs[0](a, b, b->value, 'a');
	while (tmp)
	{
		k = 0;
		while (k < 4)
		{
			if (i > cal_funcs[k](a, b, tmp->value, 'a'))
			{
				i = cal_funcs[k](a, b, tmp->value, 'a');
				*mini = tmp;
				*j = k + 1;
			}
			k++;
		}
		tmp = tmp->next;
	}
	return (i);
}
