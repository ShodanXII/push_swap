/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_needed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:03 by achat             #+#    #+#             */
/*   Updated: 2025/02/05 15:58:01 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct node {
	int data;
	struct node *next;
} node;

t_stack *create_stack(void)
{
	t_stack *stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	stack->top = NULL;
	stack->size = 0;
	printf("-------->> stack created\n");
	return (stack);
}

void push(t_stack *stack, int value)
{
	t_node *new_node;
	printf("pushed %d\n", value);
	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->value = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
	printf("stack size------------>: %d\n", stack->size);
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