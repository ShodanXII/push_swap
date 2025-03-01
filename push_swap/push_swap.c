/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:36:16 by achat             #+#    #+#             */
/*   Updated: 2025/03/01 22:16:28 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	checker(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error();
		else if (ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
			error();
		i++;
	}
}

static void	parsing(data *data, char *str)
{
	char		**split_args;
	int			i;
	char		*temp;

	i = 0;
	split_args = ft_split(str, ' ');
	while (split_args[i])
	{
		checker(split_args[i]);
		temp = ft_strjoin(data->cnt_stirng, split_args[i]);
		if (!temp)
			error();
		free(data->cnt_stirng);
		data->cnt_stirng = temp;
		temp = ft_strjoin(data->cnt_stirng, " ");
		if (!temp)
			error();
		free(data->cnt_stirng);
		data->cnt_stirng = temp;
		free(split_args[i]);
		i++;
	}
	free(split_args);
}

static void	data_init(data *data, int argc, char **argv, int i)
{
	data->start = ft_calloc(sizeof(int), 1);
	data->end = ft_calloc(sizeof(int), 1);
	data->b_size = ft_calloc(sizeof(int), 1);
	data->size = ft_calloc(sizeof(int), 1);
	data->first_tottal_number = ft_calloc(sizeof(int), 1);
	data->cnt_stirng = ft_strdup("");
	data->offset = ft_calloc(sizeof(int), 1);
	data->middile = ft_calloc(sizeof(int), 1);
	data->bottom = ft_calloc(sizeof(int), 1);
	data->last_move = NULL;
	while (i < argc)
	{
		parsing(data, argv[i]);
		i++;
	}
	data->ptr = ft_split(data->cnt_stirng, ' ');
	while (data->ptr[*(data->size)])
		(*data->size)++;
	data->a = malloc(*(data->size) * sizeof(int));
	data->b = malloc(*(data->size) * sizeof(int));
	data->sorted_ref = malloc(*(data->size) * sizeof(int));
}

int	main(int argc, char **argv)
{
	data	data;
	int		i;

	i = 0;
	data_init(&data, argc, argv, 1);
	while (i < *(data.size))
	{
		data.a[i] = ft_atoi(data.ptr[i]);
		data.sorted_ref[i] = ft_atoi(data.ptr[i]);
		i++;
	}
	algo_wdakxi(&data);
	if (*(data.size) == 0)
		phase2(&data);
	if (*(data.size) == 5 && !is_sorted(&data))
		five(&data);
	if ((*data.size) == 4 && !is_sorted(&data))
		four(&data);
	if (*(data.size) == 3 && !is_sorted(&data))
		low_sort(&data);
	if (*(data.size) == 2)
		low_sort(&data);
	free_data(&data);
	return (0);
}
