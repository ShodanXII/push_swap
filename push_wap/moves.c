/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:29:15 by achat             #+#    #+#             */
/*   Updated: 2025/02/15 10:42:26 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_to_stack(t_stack *stack_a, t_stack *stack_b)
{
	t_node *temp;

	if (!stack_a || !stack_a->top)
		return;
	temp = stack_a->top;
	stack_a->top = stack_a->top->next;
	temp->next = stack_b->top;
	stack_b->top = temp;
	stack_a->size--;
	stack_b->size++;
}
void push(t_stack *stack, int value)
{
	t_node *new_node;

	if (!stack)
		return;
	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return;
	new_node->value = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
	ft_printf("pushed-------> %d\n", value);
	index_stack(stack);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_a->top)
		return;
	push_to_stack(stack_a, stack_b);
	
}