#include "../includes/push_swap.h"

void	free_stack(t_stack **stack)
{
	while (*stack)
		roundlst_delfirst(stack);
	free(stack);
}

void 	free_double_array(char **split, int i)
{
	while (i)
	{
		free(split[i]);
		i--;
	}
	free(split);
}