/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:36:16 by achat             #+#    #+#             */
/*   Updated: 2025/02/22 21:57:16 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void checker(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			ft_printf("Error\n");
			exit(1);
		}
		else if (ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
		{
			ft_printf("Error\n");
			exit(1);
		}
		i++;
	}
}

static void parsing(data *data, char *str)
{
    int i;

    i = 0;
    if (str[i] == '-')
        i++;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
        {
            ft_printf("Error\n");
            exit(1);
        }
        i++;
    }
    char *temp = ft_strjoin(data->cnt_stirng, str);
    if (!temp)
    {
        ft_printf("Error\n");
        exit(1);
    }
    free(data->cnt_stirng);
    data->cnt_stirng = temp;
    temp = ft_strjoin(data->cnt_stirng, " ");
    if (!temp)
    {
        ft_printf("Error\n");
        exit(1);
    }
    free(data->cnt_stirng);
    data->cnt_stirng = temp;
}

static void data_init(data *data, int argc, char **argv, int i)
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
	while (i < argc)
	{
		checker(argv[i]);
   		parsing(data, argv[i]);
    	i++;
	}
	data->ptr = ft_split(data->cnt_stirng, ' ');
	while (data->ptr[*(data->size)])
		(*data->size)++;
	data->a = malloc(*(data->size) * sizeof(int));;
	data->b = malloc(*(data->size) * sizeof(int));;
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
	// print(&data);
	// ft_printf("size a----->%d size b --->%d  first size-------->%d\n", *(data.size), *(data.b_size), *(data.first_tottal_number));
	return (0);
}
