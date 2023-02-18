#include "../../inc/ps.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	if (!s1)
		return (0);
	while (*s1)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}

void	ft_checker(t_stack	*stack)
{
	char	*opt;

	while (1)
	{
		opt = get_next_line(0);
		if (ft_strcmp(opt, "\n") || !opt)
		{
			if (ft_check_sorted(stack->a, stack->size_a, 0)
				&& stack->size_b == 0)
				ft_printf("\033[0;32mOK\n");
			else
				ft_printf("\033[0;31mKO\n");
			free(stack->a);
			free(stack->b);
			exit (1);
		}
		if (!ft_check_opt(opt))
		{
			free(stack->a);
			free(stack->b);
			return ;
		}
		ft_opt(stack, opt);
	}
}

void	ft_create_stacks(char **av, t_stack *s)
{
	int	i;

	i = -1;
	s->size_a = find_av_size(av);
	s->a = malloc(s->size_a * sizeof(int));
	s->b = malloc(s->size_a * sizeof(int));
	s->size_b = 0;
	while (++i < s->size_a)
		s->a[i] = ft_ps_atoi(av[i], s->a);
	ft_check_repeat(s->a, s->size_a);
}

int	main(int ac, char **av)
{
	t_stack	stack;

	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		ft_create_stacks(av, &stack);
		ft_checker(&stack);
	}
}
