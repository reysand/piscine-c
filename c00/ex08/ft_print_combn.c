/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:17:07 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/03 12:50:27 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_pow(int n)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < n)
	{
		res *= 10;
		++i;
	}
	return (res);
}

void	ft_putnbr(int n, int size)
{
	char	c;
	int		i;

	i = n;
	while (i < size / 10 && i != 0)
	{
		write(1, "0", 1);
		i *= 10;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, size / 100);
		ft_putnbr(n % 10, 10);
	}
	else
	{
		c = n + 48;
		write(1, &c, 1);
	}
}

int	ft_is_correct_nbr(int nbr, int n)
{
	int	array[10];
	int	i;
	int	j;
	int	is_less;

	i = n - 1;
	j = nbr;
	while (i >= 0)
	{
		array[i] = j % 10;
		j /= 10;
		--i;
	}
	i = 0;
	is_less = 1;
	while (i < n - 1)
	{
		is_less &= array[i] < array[i + 1];
		++i;
	}
	return (is_less);
}

void	ft_print_combn(int n)
{
	int	nbr;
	int	max;

	if (n < 1 || n > 9)
	{
		return ;
	}
	max = ft_pow(n);
	nbr = 0;
	while (nbr < max)
	{
		if (ft_is_correct_nbr(nbr, n) || (nbr == 0 && max == 10))
		{
			ft_putnbr(nbr, max);
			if (nbr / (max / 10) < 10 - n)
			{
				write(1, ", ", 2);
			}
			else
			{
				break ;
			}
		}
		++nbr;
	}
}
