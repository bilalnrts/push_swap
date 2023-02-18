/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_moves.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <binurtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:57:04 by binurtas          #+#    #+#             */
/*   Updated: 2023/02/18 15:57:05 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_pb(t_stack *stack, int sign)
{
	int	i;

	if (stack->size_a)
	{
		stack->size_b++;
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = -1;
		stack->size_a--;
		while (++i < stack->size_a)
			stack->a[i] = stack->a[i + 1];
		if (sign == 1)
			ft_printf("pb\n");
	}
	else
	{
		return ;
	}
}

void	ft_pa(t_stack *stack, int sign)
{
	int	i;

	if (stack->size_b)
	{
		stack->size_a++;
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = stack->b[0];
		i = -1;
		stack->size_b--;
		while (++i < stack->size_b)
			stack->b[i] = stack->b[i + 1];
		if (sign == 1)
			ft_printf("pa\n");
	}
	else
	{
		return ;
	}
}
