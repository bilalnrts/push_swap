#include "../../inc/ps.h"

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
			ft_sa(stack, 1);
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
		ft_sa(s, 1);
		ft_ra(s, 1);
	}
	if (s->a[0] > s->a[1] && s->a[0] < s->a[2] && s->a[1] < s->a[2])
		ft_sa(s, 1);
	if (s->a[0] < s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
		ft_rra(s, 1);
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
	{
		ft_ra(s, 1);
		ft_sa(s, 1);
	}
	if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
		ft_ra(s, 1);
}

int	ft_push(t_stack *stack, int len, int operation)
{
	if (operation == 0)
		ft_pb(stack);
	else
		ft_pa(stack);
	len--;
	return (len);
}
