/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:37:08 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:44:44 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_t_data {
	char	**ptr;
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
}				t_data;

void	what_to_swap(t_data *t_data, char c);
void	rev_rotate(int *stack, int *count);
int		is_sorted(t_data *t_data);
void	algo_wdakxi(t_data *t_data);
void	ft_swap(int *stack);
void	ft_push(int *from, int *to, int *from_count, int *to_count);
void	check_what_to_do(t_data *t_data);
void	what_rev_rotate(t_data *t_data, char c);
void	ss(t_data *stack_a, t_data *stack_b);
void	rev_rotate(int *stack, int *count);
void	what_to_push(t_data *t_data, char c);
void	simple_sort(t_data *t_data);
void	phase2(t_data *t_data);
void	last_in_first_out(t_data *t_data, int i);
void	four(t_data *t_data);
void	ft_select(t_data *t_data, int loc);
void	what_to_push(t_data *t_data, char c);
void	low_sort(t_data *t_data);
void	what_rev_rotate(t_data *t_data, char c);
void	error(void);
void	what_to_rotate(t_data *t_data, char c);
void	phase1(t_data *t_data);
void	free_t_data(t_data *t_data);
void	five(t_data *t_data);
void	five(t_data *t_data);
void	simple_sort(t_data *t_data);
int		bigger(t_data *t_data);
void	bubble_sort(t_data *t_data, int size);
void	rr(t_data *stack);
int		is_sorted(t_data *stack);
void	rrr(t_data *stack_a, t_data *stack_b);

#endif