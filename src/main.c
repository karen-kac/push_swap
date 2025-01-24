/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:24:24 by myokono           #+#    #+#             */
/*   Updated: 2025/01/20 14:59:53 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


__attribute__((destructor))
static void destructor() {
	system("leaks -q push_swap");
}


int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	leak_detect_init();
	a = NULL;
	b = NULL;
	if (ft_create_stack(argc, argv, &(a)) == -1)
		ft_error();
	if (ft_sort_check(a) == -1)
		ft_sort(&(a), &(b));
	ft_free_stack(&(a));
	leak_detect_check();
	return (0);
}
