/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:35:07 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/14 15:40:26 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dst;

	dst = dest;
	while (*dest)
	{
		++dest;
	}
	while (*src)
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (dst);
}
