/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:48:57 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/14 15:56:59 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dst;
	unsigned int	i;

	dst = dest;
	while (*dest)
	{
		++dest;
	}
	i = 0;
	while (i < nb)
	{
		*dest = src[i];
		++dest;
		++i;
	}
	*dest = '\0';
	return (dst);
}
