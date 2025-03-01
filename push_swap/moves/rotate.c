/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:06:13 by achat             #+#    #+#             */
/*   Updated: 2025/02/22 01:43:07 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rotate(int *stack, int *size)
{
	int	tmp;
	int	j;

	j = 0;
	tmp = stack[0];
	while (j < *size - 1)
	{
		stack[j] = stack[j + 1];
		j++;
	}
	stack[j] = tmp;
}

void	what_to_rotate(data *data, char c)
{
	if (c == 'a')
	{
		ft_rotate(data->a, data->size);
		write(1, "ra\n", 3);
	}
	else if (c == 'b')
	{
		ft_rotate(data->b, data->b_size);
		write(1, "rb\n", 3);
	}
}

