/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 19:03:47 by myokono           #+#    #+#             */
/*   Updated: 2024/03/16 19:03:48 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "../includes/push_swap.h"

int ft_is_unique (t_stack *stack)
{
	t_stack *tmp;

	while (stack)
	{
		tmp = stack->next;
		while (tmp) 
		{
			if (tmp->value == stack->value)
				return (-1);
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (0);
}


























void ft_check_put_num(int argc, char **argv)
{
	int i;

	i = 1;
	while(i < argc)
	{
		if (ft_isdigit(ft_atoi(argv[i])) == 0)
			ft_error();
		
		i++;
	}
}





