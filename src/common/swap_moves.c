#include "../../ps.h"

void	ft_sa(t_stack *stack)
{
	int tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	ft_printf("sa\n");
}

void	ft_sb(t_stack *stack)
{
	int tmp;

	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	ft_printf("sb\n");
}
