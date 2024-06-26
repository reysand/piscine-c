/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:08:36 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/26 12:17:02 by fhelena          ###   ########.fr       */
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

int	ft_get_full_len(int size, char **strs, char *sep)
{
	int	len;

	len = 0;
	while (size-- > 0)
	{
		len += ft_strlen(*strs++);
		if (size != 0)
		{
			len += ft_strlen(sep);
		}
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*str;
	unsigned int	full_len;

	full_len = ft_get_full_len(size, strs, sep);
	str = (char *)malloc(full_len * sizeof(char));
	while (size-- > 0)
	{
		ft_strlcat(str, *strs++, full_len);
		if (size != 0)
		{
			ft_strlcat(str, sep, full_len);
		}
	}
	return (str);
}
