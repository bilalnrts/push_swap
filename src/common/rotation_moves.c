#include "../../inc/ps.h"

void	ft_ra(t_stack *stack, int sign)
{
	int	tmp;
	int	i;

	if ((stack->size_a == 0 || stack->size_a == 1)
		&& (sign == 1))
	{
		// ft_printf("Nothing done. Very few numbers in Stack A.\n");
		return ;
	}
	i = 1;
	tmp = stack->a[i - 1];
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[i - 1] = tmp;
	if (sign == 1)
		ft_printf("ra\n");
}

void	ft_rb(t_stack *stack, int sign)
{
	int	tmp;
	int	i;

	if ((stack->size_b == 0 || stack->size_b == 1)
		&& (sign == 1))
	{
		// ft_printf("Nothing done. Very few numbers in Stack B.\n");
		return ;
	}
	i = 1;
	tmp = stack->b[i - 1];
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[i - 1] = tmp;
	if (sign == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_stack *stack)
{
	if ((stack->size_b == 0 || stack->size_b == 1)
		|| (stack->size_a == 0 || stack->size_a == 1))
	{
		// ft_printf("Nothing done. Very few numbers in Stack A or B")
		return ;
	}
	ft_ra(stack, 0);
	ft_rb(stack, 0);
	ft_printf("rr\n");
}
