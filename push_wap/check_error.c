/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:34:26 by achat             #+#    #+#             */
/*   Updated: 2025/02/09 13:46:09 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	duplacate(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j + 2])
		{
			if(argv[i][j] == argv[i][j + 2])
				return(1);
			j++;
		}
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	if(duplacate(argv))
		printf("error\n");
	return 0;
}