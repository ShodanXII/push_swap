/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:08:29 by achat             #+#    #+#             */
/*   Updated: 2025/02/17 22:47:30 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	update_chunk(t_params *p, int *pushed, int size)
{
	if (*pushed == (p->end - p->start + 1))
	{
		p->start -= p->offset;
		p->end += p->offset;
		if (p->start < 0)
			p->start = 0;
		if (p->end >= size)
			p->end = size - 1;
		*pushed = 0;  // Reset counter for new chunk
	}
}

void	phase1(t_stack *a, t_stack *b, t_params p)
{
	int	pushed;
	int	original_size;

	original_size = a->size;
	pushed = 0;
	while (a->top)  // Correct termination condition
	{
		if (a->top->index >= p.start && a->top->index <= p.end)
		{
			pb(a, b);
			if (b->top->index < p.middle)
				rb(b);
			pushed++;
			update_chunk(&p, &pushed, original_size);
		}
		else
			ra(a);
	}
}