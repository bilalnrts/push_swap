/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <binurtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:57:26 by binurtas          #+#    #+#             */
/*   Updated: 2023/02/18 15:59:15 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_push_swap(char **av)
{
	t_stack	stack;
	int		size;
	int		i;

	i = -1;
	size = ft_find_av_size(av);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = ft_ps_atoi(av[i], stack.a);
	ft_check_repeat(stack.a, size);
	ft_sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		ft_push_swap(av);
	}
	return (0);
}
