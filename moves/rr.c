/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:11:33 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_data *stack)
{
	what_to_rotate(stack, 'a');
	what_to_rotate(stack, 'b');
	write(1, "rr\n", 3);
}
