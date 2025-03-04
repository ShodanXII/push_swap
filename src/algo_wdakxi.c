/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_wdakxi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:20:15 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:59:25 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_wdakxi(t_data *t_data)
{
	if (!is_sorted(t_data))
	{
		check_what_to_do(t_data);
		phase1(t_data);
	}
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	bubble_sort(t_data *t_data, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (t_data->sorted_ref[i] > t_data->sorted_ref[j])
			{
				temp = t_data->sorted_ref[i];
				t_data->sorted_ref[i] = t_data->sorted_ref[j];
				t_data->sorted_ref[j] = temp;
			}
			j++;
		}
		i++;
	}
}
