/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:36:16 by achat             #+#    #+#             */
/*   Updated: 2025/03/03 16:17:34 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_only_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			return (0);
		i++;
	}
	return (1);
}

static void	checker(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
	{
		i++;
		if (!str[i] || !ft_isdigit(str[i]))
			error();
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error();
		else if (ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
			error();
		i++;
	}
}

static void	parsing(t_data *t_data, char *str)
{
	char		**split_args;
	int			i;
	char		*temp;

	if (is_only_spaces(str))
		error();
	i = 0;
	split_args = ft_split(str, ' ');
	while (split_args[i])
	{
		checker(split_args[i]);
		temp = ft_strjoin(t_data->cnt_stirng, split_args[i]);
		if (!temp)
			error();
		free(t_data->cnt_stirng);
		t_data->cnt_stirng = temp;
		temp = ft_strjoin(t_data->cnt_stirng, " ");
		if (!temp)
			error();
		free(t_data->cnt_stirng);
		t_data->cnt_stirng = temp;
		free(split_args[i]);
		i++;
	}
	free(split_args);
}

static void	t_data_init(t_data *t_data, int argc, char **argv, int i)
{
	t_data->start = ft_calloc(sizeof(int), 1);
	t_data->end = ft_calloc(sizeof(int), 1);
	t_data->b_size = ft_calloc(sizeof(int), 1);
	t_data->size = ft_calloc(sizeof(int), 1);
	t_data->first_tottal_number = ft_calloc(sizeof(int), 1);
	t_data->cnt_stirng = ft_strdup("");
	t_data->offset = ft_calloc(sizeof(int), 1);
	t_data->middile = ft_calloc(sizeof(int), 1);
	t_data->bottom = ft_calloc(sizeof(int), 1);
	while (i < argc)
	{
		parsing(t_data, argv[i]);
		i++;
	}
	t_data->ptr = ft_split(t_data->cnt_stirng, ' ');
	while (t_data->ptr[*(t_data->size)])
		(*t_data->size)++;
	t_data->a = malloc(*(t_data->size) * sizeof(int));
	t_data->b = malloc(*(t_data->size) * sizeof(int));
	t_data->sorted_ref = malloc(*(t_data->size) * sizeof(int));
}

int	main(int argc, char **argv)
{
	// atexit(ll);
	t_data	t_data;
	int		i;

	i = 0;
	t_data_init(&t_data, argc, argv, 1);
	while (i < *(t_data.size))
	{
		t_data.a[i] = ft_atoi(t_data.ptr[i]);
		t_data.sorted_ref[i] = ft_atoi(t_data.ptr[i]);
		i++;
	}
	algo_wdakxi(&t_data);
	if (*(t_data.size) == 0)
		phase2(&t_data);
	if (*(t_data.size) == 5 && !is_sorted(&t_data))
		five(&t_data);
	if ((*t_data.size) == 4 && !is_sorted(&t_data))
		four(&t_data);
	if (*(t_data.size) == 3 && !is_sorted(&t_data))
		low_sort(&t_data);
	if (*(t_data.size) == 2)
		low_sort(&t_data);
	free_t_data(&t_data);
	return (0);
}
