/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:44:57 by myokono           #+#    #+#             */
/*   Updated: 2025/01/20 13:56:27 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ss(t_stack **a, t_stack **b, int i)
{

	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return ;
	ft_swap (a, 1, 'a');
	ft_swap (b, 1, 'b');
	if (i == 0)
		write (1, "ss\n", 3);
}

void	ft_rr(t_stack **a, t_stack **b, int i)
{
	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return ;
	ft_rotate (a, 1, 'a');
	ft_rotate (b, 1, 'b');
	if (i == 0)
		write(1, "rr\n", 3);
}

void	ft_rrr(t_stack **a, t_stack **b, int i)
{
	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return ;
	ft_rrotate (a, 1, 'a');
	ft_rrotate (b, 1, 'b');
	if (i == 0)
		write(1, "rrr\n", 4);
}
