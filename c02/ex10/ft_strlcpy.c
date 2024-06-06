/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reysand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:54:29 by reysand           #+#    #+#             */
/*   Updated: 2024/06/06 16:05:32 by reysand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0 || src[size] != '\0')
	{
		return (0);
	}
	while (i < size)
	{
		dest[i] = src[i];
		++i;
	}
	dest[size] = '\0';
	return (size);
}
