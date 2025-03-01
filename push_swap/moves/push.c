/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:01:38 by achat             #+#    #+#             */
/*   Updated: 2025/02/22 01:41:53 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	what_to_push(data *data, char c)
{
	if (c == 'a')
	{
		ft_push(data->b, data->a, data->b_size, data->size);
		write(1, "pa\n", 3);
	}
	else if (c == 'b')
	{
		ft_push(data->a, data->b, data->size, data->b_size);
		write(1, "pb\n", 3);
	}
}
void	ft_push(int *from, int *to, int *from_count, int *to_count)
{
	int	i;

	if (*from_count == 0)
		return ;
	i = *to_count + 1;
	while (--i > 0)
		to[i] = to[i - 1];
	to[0] = from[0];
	i = 0;
	while (i + 1 < *from_count)
	{
		from[i] = from[i + 1];
		i++;
	}
	(*from_count)--;
	(*to_count)++;
}