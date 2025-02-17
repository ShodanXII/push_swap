/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramiters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:01:14 by achat             #+#    #+#             */
/*   Updated: 2025/02/17 22:01:31 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_params calculate_phase1_params(t_stack *stack)
{
	t_params p;

	p.n = 5;
	if(stack->size <= 100)
		p.n = 11;
	else if(stack->size <= 500)
		p.n = 101;
	p.middle = stack->size / 2;
	p.offset = stack->size / p.n;
	if(p.offset < 1)
		p.offset = 1;
	p.start = p.middle - p.offset;
	p.end = p.middle + p.offset;
	if(p.start < 0)
		p.start = 0;
	if(p.end >= stack->size)
		p.end = stack->size - 1;
	return (p);
}
