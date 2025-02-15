/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:06:13 by achat             #+#    #+#             */
/*   Updated: 2025/02/15 12:22:54 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack *stack)
{
    t_node  *temp;
    t_node  *last;

    if (!stack || !stack->top || !stack->top->next)
        return;
    temp = stack->top;
    last = stack->top;
    while (last->next)
        last = last->next;
    stack->top = stack->top->next;
    last->next = temp;
    temp->next = NULL;
    ft_printf("ra\n");
}
