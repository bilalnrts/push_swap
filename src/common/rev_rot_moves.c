#include "../../ps.h"

void	ft_rra(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	i = stack -> size_a - 1;
	tmp = stack->a[i];
	while (i)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack ->a[i] = tmp;
	ft_printf("rra\n");
}
