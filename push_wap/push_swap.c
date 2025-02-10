/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:36:16 by achat             #+#    #+#             */
/*   Updated: 2025/02/10 18:16:33 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_valid_input(char **argv, int argc)
{
	int i, j;
	long long num;
	
	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		if (argv[i][j] == '\0')
			return (0);

		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				return (0);
			j++;
		}
		num = ft_atoi(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			error();
			return (0);
		}
		j = 1;
		while (j < i)
		{
			if (ft_atoi(argv[i]) == atoi(argv[j]))
				error();
			j++;
		}
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	if (!is_valid_input(argv, argc))
	{
		error();
	}
	else
	{
		data_init(argv);
	}
	return (0);
	// Proceed with stack creation
	// ...
}