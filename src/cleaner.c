/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:23:37 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 15:43:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_t_data(t_data *t_data)
{
	free(t_data->start);
	free(t_data->end);
	free(t_data->b_size);
	free(t_data->offset);
	free(t_data->sorted_ref);
	free(t_data->middile);
	free(t_data->first_tottal_number);
	free(t_data->size);
	free(t_data->bottom);
	free(t_data->a);
	free(t_data->b);
	free(t_data->cnt_stirng);
}
