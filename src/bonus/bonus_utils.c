#include "../../inc/ps.h"

int	ft_check_opt(char *opt)
{
	if (ft_strcmp(opt, "sa\n") || ft_strcmp(opt, "sb\n")
		|| ft_strcmp(opt, "ss\n") || ft_strcmp(opt, "ra\n")
		|| ft_strcmp(opt, "rb\n") || ft_strcmp(opt, "rr\n")
		|| ft_strcmp(opt, "rra\n") || ft_strcmp(opt, "rrb\n")
		|| ft_strcmp(opt, "rrr\n") || ft_strcmp(opt, "pa\n")
		|| ft_strcmp(opt, "pb\n"))
		return (1);
	else
	{
		ft_printf("Error\n");
		return (0);
	}
}

void	ft_opt(t_stack *stack, char *opt)
{
	if (ft_strcmp(opt, "sa\n"))
		ft_sa(stack, 0);
	else if (ft_strcmp(opt, "sb\n"))
		ft_sb(stack, 0);
	else if (ft_strcmp(opt, "ss\n"))
		ft_ss(stack, 0);
	else if (ft_strcmp(opt, "pa\n"))
		ft_pa(stack, 0);
	else if (ft_strcmp(opt, "pb\n"))
		ft_pb(stack, 0);
	else if (ft_strcmp(opt, "ra\n"))
		ft_ra(stack, 0);
	else if (ft_strcmp(opt, "rb\n"))
		ft_rb(stack, 0);
	else if (ft_strcmp(opt, "rr\n"))
		ft_rr(stack, 0);
	else if (ft_strcmp(opt, "rra\n"))
		ft_rra(stack, 0);
	else if (ft_strcmp(opt, "rrb\n"))
		ft_rrb(stack, 0);
	else if (ft_strcmp(opt, "rrr\n"))
		ft_rrr(stack, 0);
}
