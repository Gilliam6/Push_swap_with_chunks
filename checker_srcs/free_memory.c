/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:50:13 by rstephan          #+#    #+#             */
/*   Updated: 2021/11/20 14:50:14 by rstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack **stack)
{
	while (*stack)
		roundlst_delfirst(stack);
}

void	free_double_array(char **split, int i)
{
	while (i)
	{
		free(split[i]);
		i--;
	}
	free(split[i]);
	free(split);
}

void	free_full_double_array(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
