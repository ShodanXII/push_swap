/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:01:38 by achat             #+#    #+#             */
/*   Updated: 2025/03/06 12:20:22 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	what_to_push(t_data *t_data, char c)
{
	if (!t_data->a && !t_data->b)
		error();
	if (c == 'a')
	{
		ft_push(t_data->b, t_data->a, t_data->b_size, t_data->size);
		write(1, "pa\n", 3);
	}
	else if (c == 'b')
	{
		ft_push(t_data->a, t_data->b, t_data->size, t_data->b_size);
		write(1, "pb\n", 3);
	}
}

void	ft_push(int *from, int *to, int *from_size, int *to_size)
{
	int	i;

	if (*from_size == 0)
		return ;
	i = *to_size;
	while (i > 0)
	{
		to[i] = to[i - 1];
		i--;
	}
	to[0] = from[0];
	i = 0;
	while (i + 1 < *from_size)
	{
		from[i] = from[i + 1];
		i++;
	}
	(*from_size)--;
	(*to_size)++;
}
