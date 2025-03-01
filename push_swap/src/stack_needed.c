/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_needed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:03 by achat             #+#    #+#             */
/*   Updated: 2025/02/22 16:27:04 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(data *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < *(data->size) - 1)
	{
		if (data->a[i] < data->a[i + 1])
			j++;
		else
			return (0);
		i++;
	}
	if (j == *(data->size) - 1)
		return (1);
	return (0);
}
void print(data *data)
{
	int i;

	i = 0;
	while (i < *(data->size))
	{
		ft_printf("%d  ", data->a[i]);
		i++;
	}
}