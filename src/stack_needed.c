/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_needed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:14:03 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_data *t_data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < *(t_data->size) - 1)
	{
		if (t_data->a[i] < t_data->a[i + 1])
			j++;
		else
			return (0);
		i++;
	}
	if (j == *(t_data->size) - 1)
		return (1);
	return (0);
}
