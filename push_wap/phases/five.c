/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:03:27 by achat             #+#    #+#             */
/*   Updated: 2025/02/24 11:47:02 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simple_sort(data *data)
{
	int	i;
	int	tmp;

	tmp = 0;
	i = 1;
	while (i < *(data->size))
	{
		if (data->a[tmp] < data->a[i])
			i++;
		else
		{
			tmp = i;
			i++;
		}
	}
	ft_select(data, tmp);
	what_to_push(data, 'b');
}

void	low_sort(data *data)
{
	if (*(data->size) == 3)
	{
		if (bigger(data) == 1)
			what_to_rotate(data, 'a');
		else if (bigger(data) == 2)
			what_rev_rotate(data, 'a');
		if (data->a[0] > data->a[1])
			what_to_swap(data, 'a');
	}
	if (*(data->size) == 2)
	{
		if (data->a[0] > data->a[1])
			what_to_swap(data, 'a');
	}
}

void	 five(data *data)
{
	if (is_sorted(data))
		exit(0);
	simple_sort(data);
	simple_sort(data);
	low_sort(data);
	what_to_push(data, 'a');
	what_to_push(data, 'a');
}
