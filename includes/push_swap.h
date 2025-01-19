/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:18:17 by myokono           #+#    #+#             */
/*   Updated: 2025/01/19 21:53:01 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include "leakdetect.h"

typedef struct s_stack
{
	int	value;
	int	index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;



//action1.c
void	ft_push(t_stack **to, t_stack **from, int i, char ab);

void	ft_rotate(t_stack **stack, int i, char ab);

void	ft_rrotate(t_stack **stack, int i, char ab);

void	ft_swap(t_stack **stack, int i, char ab);

//action2.c
void	ft_ss(t_stack **a, t_stack **b, int i);

void	ft_rr(t_stack **a, t_stack **b, int i);

void	ft_rrr(t_stack **a, t_stack **b, int i);

//create_stack.c
int		ft_create_stack(int argc, char **argv, t_stack **a);

//free_error.c

void	ft_free_null(t_stack **stack);

void	ft_error(void);

void	ft_free_double_pointer(void ***ptr);

void	ft_free_stack(t_stack **stack);

//sort_big.c

//sort_small.c
void	ft_sort_three(t_stack **a);

//sort_utils.c

//sort.c
int		ft_sort_check(t_stack *a);

void	ft_sort(t_stack **a, t_stack **b);

//stack_utils.c
t_stack	*ft_stack_new(int value);

t_stack	*ft_stack_last(t_stack *stack);

void	ft_stack_add_back(t_stack **stack, t_stack *new_stack);

//stack_utils2.c
size_t	ft_stack_size(t_stack *stack);

t_stack	*ft_max_value(t_stack *stack);

t_stack	*ft_mini_value(t_stack *stack);


# endif
