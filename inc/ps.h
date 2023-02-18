#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"

typedef struct  s_stack
{
	int *a;
	int *b;
	int size_a;
	int size_b;
} t_stack;

// ***************** UTILS FUNCTIONS **************************
int		find_av_size(char **av);
void	ft_check_repeat(int *stack, int size);
int		ft_ps_atoi(char *c, int *stack);
int		ft_check_sorted(int *a, int size, int type);
void	ft_error(int *stack);

// ****************** SORTAGE FUNCTIONS ***********************

void	ft_sort(t_stack *stack, int size);
void	ft_sort_three_a(t_stack *s);
void	ft_sort_tmp(int *tmp_stack, int size);
int		ft_push(t_stack *stack, int len, int operation);
int		ft_check_sorted(int *a, int size, int type);

// ****************** OPERATION FUNCTIONS *********************
void	ft_sa(t_stack *stack, int sign);
void	ft_sb(t_stack *stack, int sign);
void	ft_ss(t_stack *stack, int sign);

void	ft_ra(t_stack *stack, int sign);
void	ft_rb(t_stack *stack, int sign);
void	ft_rr(t_stack *stack, int sign);

void	ft_rra(t_stack *stack, int sign);
void	ft_rrb(t_stack *stack, int sign);
void	ft_rrr(t_stack *stack, int sign);

void	ft_pa(t_stack *stack, int sign);
void	ft_pb(t_stack *stack, int sign);

// ****************** QUICKSORT FUNCTIONS ***********************
int		ft_get_mediane(int *pivot, int *stack, int size);
void	ft_sort_small_b(t_stack *s, int len);
void	ft_quicksort_3(t_stack *stack, int len);
int		ft_quicksort_a(t_stack *stack, int len, int cnt);
int		ft_quicksort_b(t_stack *stack, int len, int cnt);

// ****************** BONUS FUNCTIONS ***********************
void	ft_create_stacks(char **av, t_stack *s);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_opt(t_stack *stack, char *opt);
int		ft_check_opt(char *opt);

#endif
