#include "../includes/push_swap.h"

int	my_exit(int err_num)
{
	if (err_num == -1)
		ft_putstr_fd("Error\n", 1);
	if (err_num == -2)
		ft_putstr_fd("Malloc problem\n", 1);
	exit (0);
}

int	*casher(char **set, int *save)
{
	unsigned int	counter;
	unsigned int	index;
	long int		tmp;
	int				*cash;

	counter = 0;
	while (set[counter])
		counter++;
	cash = (int *)malloc(sizeof(int *) * counter);
	if (!cash)
		my_exit(-1);
	*save = counter;
	index = 0;
	while (set[index])
	{
		tmp = ft_atoi_long(set[index]);
		if (tmp > 2147483647 || tmp < -2147483648)
			my_exit(-1);
		cash[index] = tmp;
		index++;
	}
	return (cash);
}

int	main(int argc, char **argv)
{
	int	*cash;
	int	counter;

	counter = 0;
	if (argc > 1)
		counter += check_arguments(argc, argv, &cash);
	else
		return (0);
	stack_init(cash, counter);
	return (0);
}
