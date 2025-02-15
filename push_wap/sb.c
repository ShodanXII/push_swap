/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:58:48 by achat             #+#    #+#             */
/*   Updated: 2025/02/15 12:22:20 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sb(t_stack *stack)
{
	t_node	*temp;
	int		temp_val;
	int		temp_index;

	if (!stack || !stack->top || !stack->top->next)
		return;
	temp = stack->top;
	temp_val = stack->top->value;
	temp_index = stack->top->index;
	stack->top->value = stack->top->next->value;
	stack->top->index = stack->top->next->index;
	stack->top->next->value = temp_val;
	stack->top->next->index = temp_index;
	ft_printf("sb\n");
}
