#include "../includes/push_swap.h"
int	check_digits(char *argv)
{
	while (*argv)
	{
		if (!isdigit(*argv))
			return(0);
		argv++;
	}
	return (1);
}

int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 == *s2);
}

int	check_doubles(char **set)
{
	unsigned int	counter;

	while (*set)
	{
		counter = 1;
		while (set[counter])
		{
			if (ft_strcmp(set[0], set[counter]))
				return (0);
			counter++;
		}
		set++;
	}
	return (1);
}

int check_overfit(char *splitter)
{
	long int	check;

	check = ft_atoi_long(splitter);
	if (check > 2147483647 || check < -2147483648)
		return (0);
	else
		return (1);
}


int	check_arguments(int argc, char **argv, int **cash)
{
	int		i;
	char 	*arr;
//	char	*tmp;
	char	**splitter;

	arr = argv[1];
//	tmp = arr;
	arr = ft_strjoin(arr, " ");
//	free(tmp);
	i = 1;
	while (++i <= argc)
	{
//		tmp = arr;
		arr = ft_strjoin(arr, argv[i]);
//		free(tmp);
//		tmp = arr;
		arr = ft_strjoin(arr, " ");
//		free(tmp);
	}
	splitter = ft_split(arr, ' ');
	free(arr);
	i = -1;
	while (splitter[++i])
		if (!check_digits(splitter[i]) || !check_overfit(splitter[i]))
		{
			free_double_array(splitter, i);
			my_exit(-1);
		}
	if (!check_doubles(splitter))
	{
		free_double_array(splitter, i);
		my_exit(-1);
	}
	*cash = malloc(sizeof(int *) * i);
	i = -1;
	while (splitter[++i])
		(*cash)[i] = ft_atoi_long(splitter[i]);
	free_double_array(splitter, i);
	return (i);
}