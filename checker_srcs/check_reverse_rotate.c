/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:45:45 by rstephan          #+#    #+#             */
/*   Updated: 2021/11/20 14:45:46 by rstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_reverse_shift_a(t_stack **stack)
{
	if (len_stack(*stack) > 1)
	{
		(*stack)->previous->head = 1;
		(*stack)->head = 0;
		(*stack) = (*stack)->previous;
	}
}

void	check_reverse_shift_b(t_stack **stack)
{
	if (len_stack(*stack) > 1)
	{
		(*stack)->previous->head = 1;
		(*stack)->head = 0;
		(*stack) = (*stack)->previous;
	}
}

void	check_reverse_shift_both(t_stack **stack_A, t_stack **stack_B)
{
	if (len_stack(*stack_A) > 1)
	{
		(*stack_A)->previous->head = 1;
		(*stack_A)->head = 0;
		(*stack_A) = (*stack_A)->previous;
	}
	if (len_stack(*stack_B) > 1)
	{
		(*stack_B)->previous->head = 1;
		(*stack_B)->head = 0;
		(*stack_B) = (*stack_B)->previous;
	}
}
