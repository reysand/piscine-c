/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:49:24 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/18 14:18:32 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define INT_MAX 2147483647

int	is_valid_base(char *base)
{
	char	*tmp;

	if (!(*base) || !(*(base + 1)))
	{
		return (0);
	}
	while (*base)
	{
		if (*base == '+' || *base == '-')
		{
			return (0);
		}
		tmp = base + 1;
		while (*tmp)
		{
			if (*tmp == *base)
			{
				return (0);
			}
			++tmp;
		}
		++base;
	}
	return (1);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int		radix;

	if (!is_valid_base(base))
		return ;
	radix = ft_strlen(base);
	if (nbr == -INT_MAX - 1)
	{
		ft_putnbr_base(-2, base);
		nbr = INT_MAX % 1000000000 + 1;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= radix)
	{
		ft_putnbr_base(nbr / radix, base);
		ft_putnbr_base(nbr % radix, base);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}
