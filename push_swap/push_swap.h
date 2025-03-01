#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct	s_data {
	char	**ptr;
	char 	*last_move;
	char	*cnt_stirng;
	int		*offset;
	int		*start;
	int		*end;
	int		*size;
	int		*bottom;
	int		*a;
	int		*b_size;
	int		*b;
	int		*sorted_ref;
	int		*middile;
	int		*first_tottal_number;
}				data;


void	what_to_swap(data *data, char c);
void	rev_rotate(int *stack, int *count);
int		is_sorted(data *data);
void    algo_wdakxi(data *data);
void	ft_swap(int *stack);
void	ft_push(int *from, int *to, int *from_count, int *to_count);
void	check_what_to_do(data *data);
void	what_rev_rotate(data *data, char c);
void	ss(data *stack_a, data *stack_b);
void	rev_rotate(int *stack, int *count);
void	what_to_push(data *data, char c);
void	simple_sort(data *data);
void	phase2(data *data);
void	last_in_first_out(data *data, int i);
void	four(data *data);
void	ft_select(data *data, int loc);
void	what_to_push(data *data, char c);
void	low_sort(data *data);
void	what_rev_rotate(data *data, char c);
void	error();
void	what_to_rotate(data *data, char c);
void    phase1(data *data);
void	print(data *data);
void	free_data(data *data);
void	five(data *data);
void	five(data *data);
void	simple_sort(data *data);
int		bigger(data *data);
void	bubble_sort(data *data, int size);
void	rr(data *stack);
int		is_sorted(data *stack);
void	rrr(data *stack_a, data *stack_b);

#endif