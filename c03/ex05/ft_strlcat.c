/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:20:34 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/17 11:22:31 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	len;

	len = 0;
	while (*s++)
	{
		++len;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	dest += dest_len;
	while (*src && dest_len < size)
	{
		*dest++ = *src++;
		++dest_len;
	}
	if (dest_len < size)
	{
		*dest = '\0';
	}
	return (dest_len);
}
