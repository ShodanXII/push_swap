#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
} t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
} t_stack;
typedef struct s_params
{
	int	n;
	int middle;
	int	offset;
	int	start;
	int	end;
}	t_params;

t_stack *create_stack(void);
void	push_to_stack(t_stack *stack_a, t_stack *stack_b);
int		is_empty(t_stack *stack);
void	free_stack(t_stack *stack);
void	error(void);
void	data_init(char **av);
void	sort_stack(t_stack *stack);
void	index_stack(t_stack *stack);
void	print_stack(t_stack *stack);
void	push(t_stack *stack, int value);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);
int		*extract_values(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack_a, t_stack *stack_b);
void    phase1(t_stack *stack_a, t_stack *stack_b,int *sorted_ref);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	bubble_sort(int *array, int size);
t_params calculate_phase1_params(t_stack *stack);
int		*creat_sorted_ref(t_stack *stack);
int		is_sorted(t_stack *stack);
void	rrr(t_stack *stack_a, t_stack *stack_b);

#endif