/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <binurtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:57:17 by binurtas          #+#    #+#             */
/*   Updated: 2023/02/18 15:57:18 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ft_ra(t_stack *stack, int sign)
{
	int	tmp;
	int	i;

	if ((stack->size_a == 0 || stack->size_a == 1))
	{
		return ;
	}
	i = 0;
	tmp = stack->a[i];
	i++;
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

	if ((stack->size_b == 0 || stack->size_b == 1))
	{
		return ;
	}
	i = 0;
	tmp = stack->b[i];
	i++;
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[i - 1] = tmp;
	if (sign == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_stack *stack, int sign)
{
	if ((stack->size_b == 0 || stack->size_b == 1)
		|| (stack->size_a == 0 || stack->size_a == 1))
	{
		return ;
	}
	ft_ra(stack, sign);
	ft_rb(stack, sign);
	if (sign == 1)
		ft_printf("rr\n");
}
