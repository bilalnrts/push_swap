#include "../../ps.h"

void	ft_sort_tmp(int *tmp_stack, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp_stack[i] > tmp_stack[j])
			{
				tmp = tmp_stack[i];
				tmp_stack[i] = tmp_stack[j];
				tmp_stack[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort(t_stack *stack, int size)
{
	if (ft_check_sorted(stack -> a, stack -> size_a, 0) == 0)
	{
		if (size == 2)
			ft_sa(stack);
		else if (size == 3)
			ft_sort_three_a(stack);
		else
			ft_quicksort_a(stack, size, 0);
	}
}

void	ft_sort_three_a(t_stack *s)
{
	if (s->a[0] < s->a[1] && s->a[0] < s->a[2] && s->a[1] > s->a[2])
	{
		ft_sa(s);
		ft_ra(s);
	}
	if (s->a[0] > s->a[1] && s->a[0] < s->a[2] && s->a[1] < s->a[2])
		ft_sa(s);
	if (s->a[0] < s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
		ft_rra(s);
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
	{
		ft_ra(s);
		ft_sa(s);
	}
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
		ft_ra(s);
}
