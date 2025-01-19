/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:24:24 by myokono           #+#    #+#             */
/*   Updated: 2025/01/19 21:50:54 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <libc.h>

__attribute__((destructor))
static void destructor() {
	system("leaks -q push_swap");
}


int	main(int argc, char **argv)
{
	leak_detect_init();

	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ft_create_stack(argc, argv, &(a)) == -1)
		ft_error();
	if (ft_sort_check(a) == 0)
		ft_sort(&(a), &(b));
	ft_free_stack(&(a));
	leak_detect_check();
	return (0);
}
