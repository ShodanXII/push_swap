/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:42:21 by achat             #+#    #+#             */
/*   Updated: 2025/03/04 12:22:38 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	if ((dst == src) || !n)
		return (dst);
	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	i = 0;
	while (n > i)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}
