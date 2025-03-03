/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:31:48 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	biggest(t_data *t_data)
{
	int	i;
	int	index;

	index = *(t_data->b_size) + *(t_data->bottom);
	i = 0;
	while (i < *(t_data->b_size))
	{
		if (t_data->sorted_ref[index - 1] == t_data->b[i])
			return (i);
		i++;
	}
	return (-1);
}

void	last_in_first_out(t_data *t_data, int i)
{
	if (t_data->b[0] == t_data->sorted_ref[*(t_data->b_size)
			+ *(t_data->bottom) - 1])
	{
		what_to_push(t_data, 'a');
	}
	else if (*(t_data->bottom) == 0
		|| t_data->b[0] > t_data->a[*(t_data->size) - 1])
	{
		what_to_push(t_data, 'a');
		what_to_rotate(t_data, 'a');
		(*t_data->bottom)++;
	}
	else
	{
		if (i > *(t_data->b_size) / 2)
			what_rev_rotate(t_data, 'b');
		else
			what_to_rotate(t_data, 'b');
	}
}

void	phase2(t_data *t_data)
{
	int	i;

	*(t_data->bottom) = 0;
	while (*(t_data->b_size) + *(t_data->bottom) != 0)
	{
		i = biggest(t_data);
		if (i != -1)
			last_in_first_out(t_data, i);
		else if (*t_data->bottom > 0)
		{
			what_rev_rotate(t_data, 'a');
			(*t_data->bottom)--;
		}
	}
}

int	bigger(t_data *t_data)
{
	if (t_data->a[0] > t_data->a[1] && t_data->a[0] > t_data->a[2])
		return (1);
	else if (t_data->a[1] > t_data->a[2] && t_data->a[1] > t_data->a[0])
		return (2);
	return (0);
}
