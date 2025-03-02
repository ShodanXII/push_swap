/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 01:12:17 by achat             #+#    #+#             */
/*   Updated: 2025/02/22 01:20:19 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	four(data *data)
{
	if (!(is_sorted(data)))
		simple_sort(data);
	low_sort(data);
	what_to_push(data, 'a');
}