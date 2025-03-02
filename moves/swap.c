/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:53:05 by achat             #+#    #+#             */
/*   Updated: 2025/03/02 11:05:08 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	what_to_swap(data *data, char c)
{
	if (data->size == 0)
		error();
	if (c == 'a')
	{
		ft_swap(data->a);
		write(1, "sa\n", 3);
	}
	else if (c == 'b')
	{
		ft_swap(data->b);
		write(1, "sb\n", 3);
	}
}

void	ft_swap(int *stack)
{
	int		tmp;

	if (stack[0] && stack[1])
	{
		tmp = stack[0];
		stack[0] = stack[1];
		stack[1] = tmp;
	}
}
