/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_needed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:03 by achat             #+#    #+#             */
/*   Updated: 2025/02/17 21:54:48 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_stack(t_stack *stack)
{
	t_node *i;
	t_node *j;
	int temp_val;
	int temp_index;

	if (!stack || !stack->top)
		return;
	i = stack->top;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->value > j->value)
			{
				temp_val = i->value;
				temp_index = i->index;
				i->value = j->value;
				i->index = j->index;
				j->value = temp_val;
				j->index = temp_index;
			}
			j = j->next;
		}
		i = i->next;
	}
}

t_stack *create_stack(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}
void index_stack(t_stack *stack)
{
	t_node *current;
	t_node *compare;
	int index;

	if (!stack || !stack->top)
		return;
	current = stack->top;
	while (current)
	{
		index = 0;
		compare = stack->top;
		while (compare)
		{
			if (current->value > compare->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

void free_stack(t_stack *stack)
{
	t_node *current;
	t_node *next;

	if (!stack)
		return;
	current = stack->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	free(stack);
}
int	is_empty(t_stack *stack)
{
	if (!stack || !stack->top)
		return (1);
	return (0);
}
