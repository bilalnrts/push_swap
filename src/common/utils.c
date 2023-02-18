#include "../../inc/ps.h"

int	find_av_size(char **av)
{
	int	i;

	i = 0;
	if (!av)
		return (0);
	while (av[i])
		i++;
	return (i);
}

void	ft_check_repeat(int *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack[i] == stack[j])
				ft_error(stack);
			j++;
		}
		i++;
	}
}

int	ft_ps_atoi(char *c, int *stack)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while ((c[i] >= 9 && c[i] <= 13) || c[i] == 32)
		i++;
	if (c[i] == '+' || c[i] == '-')
	{
		if (c[i] == '-')
			sign = -1;
		i++;
	}
	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			ft_error(stack);
		nb = (nb * 10) + (c[i] - 48);
		i++;
	}
	if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
		ft_error(stack);
	return (nb * sign);
}

int	ft_check_sorted(int *a, int size, int type)
{
	int	i;

	if (type == 0)
	{
		i = 1;
		while (i < size)
		{
			if (a[i - 1] > a[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (a[i - 1] < a[i])
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_error(int *stack)
{
	free(stack);
	ft_printf("Error\n");
	exit (1);
}
