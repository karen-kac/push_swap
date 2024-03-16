/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:11:59 by myokono           #+#    #+#             */
/*   Updated: 2024/03/09 00:35:30 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

//create stack
//check stack
//sort
//free

int main(int argc, char **argv)
{
	t_stack *a;
	
	a = ft_create_list(argc, argv);
	if(!a || ft_is_unique(a) == -1)
		ft_error();
	while (ft_sort_check(a) == -1)
		ft_sort(&a);
	ft_free_null(&a);
	return (0);
}