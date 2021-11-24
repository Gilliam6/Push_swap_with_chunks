/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:38:34 by rstephan          #+#    #+#             */
/*   Updated: 2021/11/20 14:38:35 by rstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_a(t_stack **stack_a)
{
	int	number;
	int	order;

	if ((*stack_a) && (*stack_a)->next)
	{
		number = (*stack_a)->next->number;
		order = (*stack_a)->next->order;
		(*stack_a)->next->number = (*stack_a)->number;
		(*stack_a)->next->order = (*stack_a)->order;
		(*stack_a)->number = number;
		(*stack_a)->order = order;
	}
	write(1, "sa\n", 3);
}

void	swap_b(t_stack **stack_b)
{
	int	number;
	int	order;

	if ((*stack_b) && (*stack_b)->next)
	{
		number = (*stack_b)->next->number;
		order = (*stack_b)->next->order;
		(*stack_b)->next->number = (*stack_b)->number;
		(*stack_b)->next->order = (*stack_b)->order;
		(*stack_b)->number = number;
		(*stack_b)->order = order;
	}
	write(1, "sb\n", 3);
}

void	swap_both(t_stack **stack_a, t_stack **stack_b)
{
	int	number;
	int	order;

	if ((*stack_b) && (*stack_b)->next)
	{
		number = (*stack_b)->next->number;
		order = (*stack_b)->next->order;
		(*stack_b)->next->number = (*stack_b)->number;
		(*stack_b)->next->order = (*stack_b)->order;
		(*stack_b)->number = number;
		(*stack_b)->order = order;
	}
	if ((*stack_a) && (*stack_a)->next)
	{
		number = (*stack_a)->next->number;
		order = (*stack_a)->next->order;
		(*stack_a)->next->number = (*stack_a)->number;
		(*stack_a)->next->order = (*stack_a)->order;
		(*stack_a)->number = number;
		(*stack_a)->order = order;
	}
	write(1, "ss\n", 3);
}
