/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:18:17 by myokono           #+#    #+#             */
/*   Updated: 2025/01/20 20:03:45 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
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

// sort_big_cal.c
int		ft_cal_rarb(t_stack *a, t_stack *b, int c);

int		ft_cal_rrarrb(t_stack *a, t_stack *b, int c);

int		ft_cal_rarrb(t_stack *a, t_stack *b, int c);

int		ft_cal_rrarb(t_stack *a, t_stack *b, int c);

int		ft_cal_rarb_a(t_stack *a, t_stack *b, int c);

int		ft_cal_rrarrb_a(t_stack *a, t_stack *b, int c);

int		ft_cal_rarrb_a(t_stack *a, t_stack *b, int c);

int		ft_cal_rrarb_a(t_stack *a, t_stack *b, int c);

int		ft_rotate_type_ab(t_stack *a, t_stack *b);

int		ft_rotate_type_ba(t_stack *a, t_stack *b);


//sort_big.c
void	ft_sort_big(t_stack **a, t_stack **b);

//sort_small.c
void	ft_sort_three(t_stack **a);

//sort_utils.c
int		ft_rarb(t_stack **a, t_stack **b, int c, char s);

int		ft_rrarrb(t_stack **a, t_stack **b, int c, char s);

int		ft_rrarb(t_stack **a, t_stack **b, int c, char s);

int		ft_rarrb(t_stack **a, t_stack **b, int c, char s);

//sort.c
int		ft_sort_check(t_stack *a);

void	ft_sort(t_stack **a, t_stack **b);

//stack_utils1.c
t_stack	*ft_stack_new(int value);

t_stack	*ft_stack_last(t_stack *stack);

void	ft_stack_add_back(t_stack **stack, t_stack *new_stack);

size_t	ft_find_target(t_stack *a, int nbr);

int		ft_find_index(t_stack *stack, int nbr);

int	ft_find_place_b(t_stack *b, int nbr_push);

int	ft_find_place_a(t_stack *a, int nbr_push);
//stack_utils2.c
int		ft_stack_size(t_stack *stack);

int		ft_max_value(t_stack *stack);

int		ft_mini_value(t_stack *stack);


#endif
