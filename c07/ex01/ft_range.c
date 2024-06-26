/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:24:43 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/25 14:59:24 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		return ((void *)0);
	}
	range = malloc(size * sizeof(int));
	i = 0;
	while (i < size)
	{
		range[i] = min;
		++i;
		++min;
	}
	return (range);
}
