#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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

// ****************** SORTAGE FUNCTIONS ***********************

void	ft_sort(t_stack *stack, int size);
void	ft_sort_three_a(t_stack *s);
void	ft_sort_tmp(int *tmp_stack, int size);

// ****************** SWAP MOVES FUNCTIONS *********************
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);

// ****************** ROT MOVES FUNCTIONS **********************
void	ft_ra(t_stack *stack);

// ****************** REV ROT MOVES FUNCTIONS ******************
void	ft_rra(t_stack *stack);

// ****************** PUSH MOVES FUNCTIONS *********************
void	ft_pa(t_stacks *stack);

// ****************** QUICKSORT FUNCTIONS ***********************
int		ft_get_mediane(int *pivot, int *stack, int size);

#endif
