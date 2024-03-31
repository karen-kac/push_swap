/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 20:24:02 by myokono           #+#    #+#             */
/*   Updated: 2024/03/16 20:28:17 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

int ft_max_pointer (t_stack *stack)
{
	int i;
	t_stack *tmp;

	i = 0;
	tmp  = stack;
	while (tmp->value != max)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}