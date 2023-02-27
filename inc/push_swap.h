/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binurtas <binurtas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:21:27 by binurtas          #+#    #+#             */
/*   Updated: 2023/02/27 15:33:58 by binurtas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/inc/ft_printf.h"
# include "../libft/inc/get_next_line.h"
# include "../libft/inc/libft.h"

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

void	ft_push_swap(char **av);
int		ft_find_av_size(char **av);
void	ft_error(int *stack);
int		ft_ps_atoi(char *c, int *stack);
void	ft_check_repeat(int *stack, int size);
//Operations
void	ft_sa(t_stack *stack, int sign);
void	ft_sb(t_stack *stack, int sign);
void	ft_ss(t_stack *stack, int sign);
void	ft_ra(t_stack *stack, int sign);
void	ft_rb(t_stack *stack, int sign);
void	ft_rr(t_stack *stack, int sign);
void	ft_rra(t_stack *stack, int sign);
void	ft_rrb(t_stack *stack, int sign);
void	ft_rrr(t_stack *stack, int sign);
void	ft_pb(t_stack *stack, int sign);
void	ft_pa(t_stack *stack, int sign);
//Sortage
void	ft_sort(t_stack *stack, int size);
int		ft_check_sorted(int *a, int size, int type);
void	ft_sort_three_a(t_stack *s);
void	ft_sort_tmp(int *tmp_stack, int size);
//Quicksort
int		ft_quicksort_a(t_stack *stack, int len, int cnt);
int		ft_quicksort_b(t_stack *stack, int len, int cnt);
void	ft_quicksort_3(t_stack *stack, int len);
void	ft_sort_small_b(t_stack *stack, int len);
int		ft_push(t_stack *stack, int len, int operation);
int		ft_get_mediane(int *pivot, int *stack, int size);
//Bonus
int		*ft_check_errors(char **argv);
void	ft_checker(t_stack *stack);
int		ft_check_opt(char *opt);
void	ft_opt(t_stack *stack, char *opt);
int		ft_strcmp(const char *s1, const char *s2);
#endif
