/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:16:00 by myokono           #+#    #+#             */
/*   Updated: 2024/03/08 16:21:21 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_free_null(t_stack **stack)
{
	t_stack *tmp;

	if(!stack)
		return ;
	while(*stack)
	{
		tmp = (*stack)->next;
		(*stack)->value = 0;
		(*stack)->index = 0;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}