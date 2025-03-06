/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phase1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 00:26:45 by achat             #+#    #+#             */
/*   Updated: 2025/03/06 16:12:12 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push_first(t_data *t_data)
{
	while (*(t_data->b_size) <= (*(t_data->end) - *(t_data->start)))
	{
		if (t_data->a[0] >= t_data->sorted_ref[*(t_data->start)]
			&& t_data->a[0] <= t_data->sorted_ref[*t_data->end])
		{
			what_to_push(t_data, 'b');
			if ((t_data->b[0] < t_data->sorted_ref[*(t_data->middile)]) 
				&& ((*t_data->b_size > 1)))
				what_to_rotate(t_data, 'b');
		}
		else
			what_to_rotate(t_data, 'a');
	}
	*(t_data->start) -= *(t_data->offset);
	if (*(t_data->start) < 0)
		*(t_data->start) = 0;
	*(t_data->end) += *(t_data->offset);
	if (*(t_data->end) >= *(t_data->first_tottal_number))
		*(t_data->end) = *(t_data->first_tottal_number) - 1;
}

void	phase1(t_data *t_data)
{
	if (*(t_data->size) > 5)
	{
		*(t_data->first_tottal_number) = *(t_data->size);
		while (*(t_data->size) != 0)
			push_first(t_data);
	}
}
