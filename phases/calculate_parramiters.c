/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_parramiters.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:08:59 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	offset(t_data *t_data)
{
	if (*(t_data->size) <= 10)
		*t_data->offset = *(t_data->size) / 5;
	else if (*(t_data->size) <= 150)
		*t_data->offset = *(t_data->size) / 8;
	else
		*t_data->offset = *(t_data->size) / 13;
	return (*t_data->offset);
}

static void	check_dup(t_data *t_data)
{
	int	i;
	int	j;

	i = 0;
	while (i < *(t_data->size))
	{
		j = i + 1;
		while (j < *(t_data->size))
		{
			if (t_data->a[i] == t_data->a[j])
				error();
			j++;
		}
		i++;
	}
}

void	check_what_to_do(t_data *t_data)
{
	bubble_sort(t_data, *(t_data->size));
	*(t_data->middile) = *(t_data->size) / 2;
	*(t_data->offset) = offset(t_data);
	*(t_data->start) = *(t_data->middile) - *(t_data->offset);
	if (*(t_data->start) < 0)
		*(t_data->start) = 0;
	*(t_data->end) = *(t_data->middile) + *(t_data->offset);
	if (*(t_data->end) >= *(t_data->size))
		*(t_data->end) = *(t_data->size) - 1;
	*(t_data->b_size) = 0;
	check_dup(t_data);
}

void	ft_select(t_data *t_data, int loc)
{
	if (loc == 0)
		return ;
	else if (loc == 1)
		what_to_swap(t_data, 'a');
	else if (loc == 2)
	{
		what_to_rotate(t_data, 'a');
		what_to_rotate(t_data, 'a');
	}
	else if (loc == 3 && *(t_data->size) == 5)
	{
		what_rev_rotate(t_data, 'a');
		what_rev_rotate(t_data, 'a');
	}
	else
		what_rev_rotate(t_data, 'a');
}
