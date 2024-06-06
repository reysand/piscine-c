/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reysand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:08:08 by reysand           #+#    #+#             */
/*   Updated: 2024/06/06 16:30:27 by reysand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_dec2hex(int dec)
{
	int		temp;
	char	first;
	char	second;

	temp = dec / 16;
	first = temp + 48;
	write(1, &first, 1);
	if (temp > 0)
	{
		dec /= temp;
	}
	if (dec > 9)
	{
		second = dec - 10 + 97;
	}
	else
	{
		second = dec + 48;
	}
	write(1, &second, 1);
}

int	ft_is_non_printable(char c)
{
	if (c < ' ' || c > '~')
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_is_non_printable(*str))
		{
			write(1, "\\", 1);
			ft_dec2hex(*str);
		}
		else
		{
			write(1, str, 1);
		}
		++str;
	}
}
