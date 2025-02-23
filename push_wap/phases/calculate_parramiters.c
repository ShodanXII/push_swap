/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_parramiters.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 23:08:59 by achat             #+#    #+#             */
/*   Updated: 2025/02/22 22:00:21 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int offset(data *data)
{
	if (*(data->size) <= 10)
		*data->offset = *(data->size) / 5;
	else if (*(data->size) <= 150)
		*data->offset = *(data->size) / 8;
	else
		*data->offset = *(data->size) / 13;
	return (*data->offset);
}

static void   check_dup(data *data)
{
	int i;
	int j;

	i = 0;
	while (i < *(data->size))
	{
		j = i + 1;
		while (j < *(data->size))
		{
			if (data->a[i] == data->a[j])
				exit(write(1, "Error\n", 6));
			j++;
		}
		i++;
	}
}

void    check_what_to_do(data *data)
{
	bubble_sort(data, *(data->size));
	*(data->middile) = *(data->size) / 2;
	*(data->offset) = offset(data);
	*(data->start) = *(data->middile) - *(data->offset);
	if (*(data->start) < 0)
		*(data->start) = 0;
	*(data->end) = *(data->middile) + *(data->offset);
	if (*(data->end) >= *(data->size))
		*(data->end) = *(data->size) - 1;
	ft_printf("start = %d\n", *(data->start));
	ft_printf("end = %d\n", *(data->end));
	ft_printf("middile = %d\n", *(data->middile));
	ft_printf("offset = %d\n", *(data->offset));
	check_dup(data);
}
void	ft_select(data *data, int loc)
{
	if (loc == 0)
		return ;
	else if (loc == 1)
		what_to_swap(data, 'a');
	else if (loc == 2)
	{
		what_to_rotate(data, 'a');
		what_to_rotate(data, 'a');
	}
	else if (loc == 3 && *(data->size) == 5)
	{
		what_rev_rotate(data, 'a');
		what_rev_rotate(data, 'a');
	}
	else
		what_rev_rotate(data, 'a');
}
