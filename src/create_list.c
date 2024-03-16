/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 20:01:17 by myokono           #+#    #+#             */
/*   Updated: 2024/02/06 20:13:54 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/push_swap.h"

//If the argument has one number, it will end normally.
t_stack *ft_create_list_q(char **argv, t_stack **stack)
{
	char **tmp;
	int count;

	tmp = ft_split(argv[1], ' ');
	count = ft_count_words(argv{1});
	if (count == 1)
		exit (0);
	return (ft_create_list_nq(count ,tmp, &a));
}

t_stack *ft_create_list_nq(int argc, char **argv, t_stack **stack)
{
	int i;
	int value;
	t_stack *new_stack;

	i = 1;
	while (i < argc)
	{
		value = ft_atoi2(argv[i]);
		new_stack  = malloc (sizeof(t_stack))
		if (!new_stack)
			ft_error();
		new_stack->value = j;
		new_stack->next =NULL;
		ft_add_back (stack, new_stack);
		i++;
	}
	return (*stack);
}

t_stack *ft_create_list(int argc, char **argv)
{
	t_stack *a;

	a = NULL;
	if(argc < 2)
		return ;
	if(argc == 2)
		a = ft_create_list_q (argv, &a);
	if (argc > 2)
		a = ft_create_list_nq (argc, argv, &a);
	return (a);
}