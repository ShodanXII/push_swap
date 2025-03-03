/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:03:27 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simple_sort(t_data *t_data)
{
	int	i;
	int	tmp;

	tmp = 0;
	i = 1;
	while (i < *(t_data->size))
	{
		if (t_data->a[tmp] < t_data->a[i])
			i++;
		else
		{
			tmp = i;
			i++;
		}
	}
	ft_select(t_data, tmp);
	what_to_push(t_data, 'b');
}

void	low_sort(t_data *t_data)
{
	if (*(t_data->size) == 3)
	{
		if (bigger(t_data) == 1)
			what_to_rotate(t_data, 'a');
		else if (bigger(t_data) == 2)
			what_rev_rotate(t_data, 'a');
		if (t_data->a[0] > t_data->a[1])
			what_to_swap(t_data, 'a');
	}
	if (*(t_data->size) == 2)
	{
		if (t_data->a[0] > t_data->a[1])
			what_to_swap(t_data, 'a');
	}
}

void	five(t_data *t_data)
{
	if (is_sorted(t_data))
		exit(0);
	simple_sort(t_data);
	simple_sort(t_data);
	low_sort(t_data);
	what_to_push(t_data, 'a');
	what_to_push(t_data, 'a');
}
