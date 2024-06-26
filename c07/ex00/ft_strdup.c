/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 13:47:27 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/25 14:22:52 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s++)
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
