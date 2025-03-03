/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:06:13 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rotate(int *stack, int *size)
{
	int		tmp;
	int		j;

	j = 0;
	tmp = stack[0];
	while (j < *size - 1)
	{
		stack[j] = stack[j + 1];
		j++;
	}
	stack[j] = tmp;
}

void	what_to_rotate(t_data *t_data, char c)
{
	if (t_data->size == 0)
		error();
	if (c == 'a')
	{
		ft_rotate(t_data->a, t_data->size);
		write(1, "ra\n", 3);
	}
	else if (c == 'b')
	{
		ft_rotate(t_data->b, t_data->b_size);
		write(1, "rb\n", 3);
	}
}
