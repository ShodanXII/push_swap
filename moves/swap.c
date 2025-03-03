/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 11:53:05 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	what_to_swap(t_data *t_data, char c)
{
	if (t_data->size == 0)
		error();
	if (c == 'a')
	{
		ft_swap(t_data->a);
		write(1, "sa\n", 3);
	}
	else if (c == 'b')
	{
		ft_swap(t_data->b);
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
