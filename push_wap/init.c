/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:47:04 by achat             #+#    #+#             */
/*   Updated: 2025/02/10 18:17:53 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}


void data_init(char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
    int     i;

    stack_a = create_stack();
    stack_b = create_stack();
    if (!stack_a || !stack_b)
        return;

    i = 1;
    while (av[i])
    {
        push(stack_a, ft_atoi(av[i]));
        i++;
    }
    sort_stack(stack_a);
	print_stack(stack_a);
}


void print_stack(t_stack *stack)
{
	t_node *current;

	if (!stack || !stack->top)
		return;
	current = stack->top;
	while (current)
	{
		printf("value ----->>>>>>%d it index----->>%d\n", current->value, current->index);
		current = current->next;
	}
}

