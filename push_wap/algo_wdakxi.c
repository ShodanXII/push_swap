/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_wdakxi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:20:15 by achat             #+#    #+#             */
/*   Updated: 2025/02/24 20:18:57 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    algo_wdakxi(data *data)
{
	if(!is_sorted(data))
	{
		check_what_to_do(data);
		phase1(data);
	}
}
void error()
{
		write(2,"Error\n", 6);
		exit(1);
}

void	bubble_sort(data *data, int size)
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
			if (data->sorted_ref[i] > data->sorted_ref[j])
			{
				temp = data->sorted_ref[i];
				data->sorted_ref[i] = data->sorted_ref[j];
				data->sorted_ref[j] = temp;
			}
			j++;
		}
		i++;
	}
}


