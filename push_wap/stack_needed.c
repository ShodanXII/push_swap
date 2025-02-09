/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_needed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:03 by achat             #+#    #+#             */
/*   Updated: 2025/02/06 20:15:08 by achat            ###   ########.fr       */
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
            if (current->value < compare->value)
                index++;
            compare = compare->next;
        }
        current->index = index;
        current = current->next;
    }
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
	printf("pushed %d\n", value);
    index_stack(stack);
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