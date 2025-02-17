/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_reference.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:11:35 by achat             #+#    #+#             */
/*   Updated: 2025/02/17 22:49:51 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void  print_refe(int *arry)
{
    int i = -1;
    while (arry[++i])
    {
        ft_printf("after soortig --------> %d\n", arry[i]);
    }
}

int	*extract_values(t_stack *stack)
{
	int		*array;
	t_node	*temp;
	int		i;

	if (!stack || stack->size <= 0)
		return (NULL);
	array = malloc(sizeof(int) * stack->size);
	if (!array)
		return (NULL);
	temp = stack->top;
	i = 0;
	while (i < stack->size && temp)
	{
		array[i] = temp->value;
        ft_printf(" %d", array[i]);
		temp = temp->next;
		i++;
	}
	return (array);
}

int	*creat_sorted_ref(t_stack *stack)
{
	int	*sorted;

	sorted = extract_values(stack);
	if (NULL == sorted)
		return (NULL);
    // ft_printf("stack sizee ========> %d\n", stack->size);
	bubble_sort(sorted, stack->size);
    // print_refe(sorted);
	return (sorted);
}

void	free_sorted_ref(int *sorted)
{
	if(NULL == sorted)
		free(sorted);
}

int	is_sorted(t_stack *stack)
{
	t_node	*current;

	if (!stack || !stack->top)
		return (0);
	current = stack->top;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}
