/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:12:21 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
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

void	what_rev_rotate(t_data *t_data, char c)
{
	if (t_data->size == 0)
		error();
	if (c == 'a')
	{
		rev_rotate(t_data->a, t_data->size);
		write(1, "rra\n", 4);
	}
	else if (c == 'b')
	{
		rev_rotate(t_data->b, t_data->b_size);
		write(1, "rrb\n", 4);
	}
}
