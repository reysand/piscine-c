/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:15:21 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/04 16:18:25 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*dst;
	unsigned int	i;

	dst = dest;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		++i;
	}
	dst[n] = '\0';
	return (dst);
}
