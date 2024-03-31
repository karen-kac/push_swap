/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:18:17 by myokono           #+#    #+#             */
/*   Updated: 2024/03/16 20:15:47 by myokono          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

//struct
typdef struct s_stack
{
	int	value;
	int	index;
	struct s_stack *next;
	struct s_stack *prev;
}	t_stack;

//create_list

t_stack *ft_create_list(int argc, char **argv);

t_stack *ft_create_list_nq(int argc, char **argv, t_stack **stack);

t_stack *ft_create_list_q(char **argv, t_stack **stack);

//create_list_u

int ft_atoi2(const char *str);

int	ft_count_words(char *s, char c);

//action1

void ft_push(t_stack **to , t_stack **from, int i, char ab);

void	ft_rotate(t_stack **stack, int i, char ab);

void ft_rrotate(t_stack **stack, int i, char ab);

void ft_swap(t_stack **stack, int i, char ab);

//action2

void	ft_ss(t_stack **a, t_stack **b, int i);

void ft_rr(t_stack **a, t_stack **b, int i);

void ft_rrr(t_stack **a, t_stack **b, int i);

//valid

int ft_is_unique (t_stack *stack);

//free_error

void ft_free_null(t_stack **stack);

void ft_error(void);

//sort

int ft_sort_check(t_stack *stack);

void ft_sort (t_stack **a);

//sort_small

void ft_sort_five (t_stack **a);

void ft_sort_three (t_stack **a);

void ft_sort_small (t_stack **a, size_t size);

//sort_big

void ft_sort_big(t_stack **a);


//


//


# endif