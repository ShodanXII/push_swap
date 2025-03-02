/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:12:21 by achat             #+#    #+#             */
/*   Updated: 2025/03/02 12:15:58 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate(int *stack, int *count)
{
	int		tmp;
	int		j;

	j = *count;
	tmp = stack[*(count) - 1];
	while (--j > 0)
		stack[j] = stack[j - 1];
	stack[0] = tmp;
}

void	what_rev_rotate(data *data, char c)
{
	if (data->size == 0)
		error();
	if (c == 'a')
	{
		rev_rotate(data->a, data->size);
		write(1, "rra\n", 4);
	}
	else if (c == 'b')
	{
		rev_rotate(data->b, data->b_size);
		write(1, "rrb\n", 4);
	}
}
