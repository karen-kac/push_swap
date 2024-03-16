/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokono <myokono@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:18:17 by myokono           #+#    #+#             */
/*   Updated: 2024/03/08 11:24:08 by myokono          ###   ########.fr       */
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

//file





# endif