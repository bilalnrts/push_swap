#include "../../inc/ps.h"

void	ft_rra(t_stack *stack, int sign)
{
	int	tmp;
	int	i;

	if ((stack->size_a == 0 || stack->size_a == 1) && sign)
	{
		// ft_printf("Nothing done. Very few numbers in Stack A.\n");
		return ;
	}
	i = stack -> size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack ->a[i] = tmp;
	if (sign == 1)
		ft_printf("rra\n");
}

void	ft_rrb(t_stack *stack, int sign)
{
	int	tmp;
	int	i;

	if ((stack->size_b == 0 || stack->size_b == 1) && sign)
	{
		// ft_printf("Nothing done. Very few number in Stack B.\n");
		return ;
	}
	i = stack->size_b--;
	tmp = stack->b[i];
	while (i)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[i] = tmp;
	if (sign == 1)
		ft_printf("rrb\n");
}

void	ft_rrr(t_stack *stack)
{
	if ((stack->size_b == 0 || stack->size_b == 1)
		|| (stack->size_a == 0 || stack->size_a == 1))
	{
		// ft_printf("Nothing done. Very few numbers in stacks.\n");
		return ;
	}
	ft_rra(stack, 0);
	ft_rrb(stack, 0);
	ft_printf("rrr\n");
}
