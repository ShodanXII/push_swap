/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:14:32 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrr(t_data *stack_a, t_data *stack_b)
{
	rev_rotate(stack_a->a, stack_a->size);
	rev_rotate(stack_b->b, stack_b->b_size);
	write(1, "rrr\n", 4);
}
