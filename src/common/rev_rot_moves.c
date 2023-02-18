/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rot_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <binurtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:57:14 by binurtas          #+#    #+#             */
/*   Updated: 2023/02/18 15:57:15 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_rra(t_stack *stack, int sign)
{
	int	tmp;
	int	i;

	if ((stack->size_a == 0 || stack->size_a == 1))
	{
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

	if ((stack->size_b == 0 || stack->size_b == 1))
	{
		return ;
	}
	i = stack->size_b - 1;
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

void	ft_rrr(t_stack *stack, int sign)
{
	if ((stack->size_b == 0 || stack->size_b == 1)
		|| (stack->size_a == 0 || stack->size_a == 1))
	{
		return ;
	}
	ft_rra(stack, sign);
	ft_rrb(stack, sign);
	if (sign == 1)
		ft_printf("rrr\n");
}
