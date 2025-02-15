/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:12:21 by achat             #+#    #+#             */
/*   Updated: 2025/02/15 12:23:43 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack)
{
	t_node	*temp;
	t_node	*last;

	if (!stack || !stack->top || !stack->top->next)
		return;
	temp = stack->top;
	last = stack->top;
	while (last->next->next)
		last = last->next;
	stack->top = last->next;
	last->next = NULL;
	stack->top->next = temp;
	ft_printf("rra\n");
}
