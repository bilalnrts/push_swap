#include "../../inc/ps.h"

void	ft_quicksort_3(t_stack *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		ft_sort_three_a(stack);
	else if (len == 2)
	{
		if (stack ->a[0] > stack->a[1])
			ft_sa(stack, 1);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				ft_sa(stack, 1);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				len = ft_push(stack, len, 0);
			else if (stack ->a[0] > stack->a[1])
				ft_sa(stack, 1);
			else if (len++)
				ft_pa(stack, 1);
		}
	}
}

void	ft_sort_small_b(t_stack *s, int len)
{
	if (len == 1) // sil bunu gereksiz
		ft_pa(s, 1);
	else if (len == 2)
	{
		if (s->b[0] < s->b[1])
			ft_sb(s, 1);
		while (len--)
			ft_pa(s, 1);
	}
	else if (len == 3)
	{
		while (len || !(s->a[0] < s->a[1] && s->a[1] < s->a[2]))
		{
			if (len == 1 && s->a[0] > s->a[1])
				ft_sa(s, 1);
			else if (len == 1 || (len >= 2 && s->b[0] > s->b[1])
				|| (len == 3 && s->b[0] > s->b[2]))
				len = ft_push(s, len, 1);
			else
				ft_sb(s, 1);
		}
	}
}

int	ft_get_mediane(int *pivot, int *stack, int size)
{
	int	*tmp_stack;
	int	i;

	tmp_stack = malloc(size * sizeof(int));
	if (!tmp_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp_stack[i] = stack[i];
		i++;
	}
	ft_sort_tmp(tmp_stack, size);
	*pivot = tmp_stack[size / 2];
	free(tmp_stack);
	return (1);
}

int	ft_quicksort_a(t_stack *stack, int len, int cnt)
{
	int	pivot;
	int	items;

	if (ft_check_sorted(stack->a, len, 0) == 1)
		return (1);
	items = len;
	if (len <= 3)
	{
		ft_quicksort_3(stack, len);
		return (1);
	}
	if (!ft_get_mediane(&pivot, stack->a, len))
		return (0);
	while (len != items / 2 + items % 2)
	{
		if (stack ->a[0] < pivot && (len--))
			ft_pb(stack, 1);
		else if (++cnt)
			ft_ra(stack, 1);
	}
	while (items / 2 + items % 2 != stack->size_a && cnt--)
		ft_rra(stack, 1);
	return (ft_quicksort_a(stack, items /  2 + items % 2, 0) &&
	ft_quicksort_b(stack, items /  2, 0));
}

int	ft_quicksort_b(t_stack *stack, int len, int cnt)
{
	int	pivot;
	int	items;

	if (!cnt && ft_check_sorted(stack->b, len, 1) == 1)
		while (len--)
			ft_pa(stack, 1);
	if (len <= 3)
	{
		ft_sort_small_b(stack, len);
		return (1);
	}
	items = len;
	if (!ft_get_mediane(&pivot, stack->b, len))
		return (0);
	while (len != items / 2)
	{
		if (stack ->b[0] >= pivot && len--)
			ft_pa(stack, 1);
		else if (++cnt)
			ft_rb(stack, 1);
	}
	while (items / 2 != stack -> size_b && cnt--)
		ft_rrb(stack, 1);
	return (ft_quicksort_a(stack, items /  2 + items % 2, 0) &&
	ft_quicksort_b(stack, items /  2, 0));
}
