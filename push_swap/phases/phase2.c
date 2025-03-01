/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:31:48 by achat             #+#    #+#             */
/*   Updated: 2025/02/22 16:43:19 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	biggest(data *data)
{
	int	i;
	int	index;

	index = *(data->b_size) + *(data->bottom);
	i = 0;
	while (i < *(data->b_size))
	{
		if (data->sorted_ref[index - 1] == data->b[i])
			return (i);
		i++;
	}
	return (-1);
}
void	last_in_first_out(data *data, int i)
{
	if (data->b[0] == data->sorted_ref[*(data->b_size)
			+ *(data->bottom) - 1])
	{
		what_to_push(data, 'a');
	}
	else if (*(data->bottom) == 0
		|| data->b[0] > data->a[*(data->size) - 1])
	{
		what_to_push(data, 'a');
		what_to_rotate(data, 'a');
		(*data->bottom)++;
	}
	else
	{
		if (i > *(data->b_size) / 2)
			what_rev_rotate(data, 'b');
		else
			what_to_rotate(data, 'b');
	}
}

void phase2(data *data)
{
    	int	i;
	*(data->bottom) = 0;
	while (*(data->b_size) + *(data->bottom) != 0)
	{
		i = biggest(data);
		if (i != -1)
			last_in_first_out(data, i);
		else if (*data->bottom > 0)
		{
			what_rev_rotate(data, 'a');
			(*data->bottom)--;
		}
	}
}
int	bigger(data *data)
{
	if (data->a[0] > data->a[1] && data->a[0] > data->a[2])
		return (1);
	else if (data->a[1] > data->a[2] && data->a[1] > data->a[0])
		return (2);
	return (0);
}
