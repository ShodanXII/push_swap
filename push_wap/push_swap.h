#ifndef PUSHSWAP_H
#define PUSHSWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "libft/libft.h"

typedef struct s_node
{
	int             value;
	int            index;
	struct s_node   *next;
} t_node;

typedef struct s_stack
{
	t_node  *top;
	int     size;
} t_stack;

t_stack *create_stack(void);
void    push(t_stack *stack, int value);
int     is_empty(t_stack *stack);
void    free_stack(t_stack *stack);
int 	error(void);
void	data_init(char **av);
void	sort_stack(t_stack *stack);
void	index_stack(t_stack *stack);
void	print_stack(t_stack *stack);
// void free_stack(t_stack *stack)

#endif