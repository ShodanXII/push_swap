/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:23:37 by achat             #+#    #+#             */
/*   Updated: 2025/03/01 22:02:40 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_data(data *data)
{
	free(data->start);
	free(data->end);
	free(data->b_size);
	free(data->offset);
	free(data->sorted_ref);
	free(data->middile);
	free(data->first_tottal_number);
	free(data->size);
	free(data->bottom);
	free(data->a);
	free(data->b);
	free(data->cnt_stirng);
}
