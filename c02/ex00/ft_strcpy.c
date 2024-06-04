/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:47:29 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/04 15:36:46 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcpy(char *dest, char *src)
{
	char	*dst;
	int		i;
	int		len;

	dst = dest;
	i = 0;
	len = ft_strlen(dest);
	while (i < len)
	{
		dst[i] = src[i];
		++i;
	}
	dst[len] = '\0';
	return (dst);
}
