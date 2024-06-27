/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:18:05 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/27 14:42:06 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
	{
		++len;
	}
	return (len);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dst[i] = *src++;
		++i;
	}
	return (dst);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src));
	dst = ft_strcpy(dst, src);
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	array = (t_stock_str *)malloc(ac * sizeof(t_stock_str));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (array[i].copy == NULL)
		{
			return (NULL);
		}
		++i;
	}
	array[i].str = 0;
	return (array);
}
