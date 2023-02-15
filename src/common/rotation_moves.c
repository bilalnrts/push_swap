#include "../../ps.h"

void	ft_ra(t_stack *stack)
{
	int	tmp;
	int	i;

	i = 1;
	tmp = stack->a[i - 1];
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[i - 1] = tmp;
	ft_printf("ra\n");
}
