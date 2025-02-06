#include "push_swap.h"

// to free stack later if i needed 

int is_empty(t_stack *stack)
{
	return (!stack || stack->size == 0);
}
