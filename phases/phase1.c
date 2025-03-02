/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:26:45 by achat             #+#    #+#             */
/*   Updated: 2025/03/02 11:13:12 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push_first(data *data)
{
	while (*(data->b_size) <= (*(data->end) - *(data->start)))
	{
		if (data->a[0] >= data->sorted_ref[*(data->start)]
			&& data->a[0] <= data->sorted_ref[*data->end])
		{
			what_to_push(data, 'b');
			if (data->b[0] < data->sorted_ref[*(data->middile)])
				what_to_rotate(data, 'b');
		}
		else
			what_to_rotate(data, 'a');
	}
	*(data->start) -= *(data->offset);
	if (*(data->start) < 0)
		*(data->start) = 0;
	*(data->end) += *(data->offset);
	if (*(data->end) >= *(data->first_tottal_number))
		*(data->end) = *(data->first_tottal_number) - 1;
}

void	phase1(data *data)
{
	if (*(data->size) > 5)
	{
		*(data->first_tottal_number) = *(data->size);
		while (*(data->size) != 0)
			push_first(data);
	}
}
