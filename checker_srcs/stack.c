/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:52:06 by rstephan          #+#    #+#             */
/*   Updated: 2021/11/20 14:52:07 by rstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*stack_constructor(int *cash, int counter)
{
	int				index;
	t_stack			*stack_a;

	index = 0;
	stack_a = lstnew(cash[index], 1, 0);
	while (++index < counter)
		roundlst_addback(&stack_a, lstnew(cash[index], 0, 0));
	return (stack_a);
}
