/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:33:27 by fhelena           #+#    #+#             */
/*   Updated: 2024/05/31 19:53:52 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	int	nbr1;
	int	nbr2;

	nbr1 = n / 10 + 48;
	nbr2 = n % 10 + 48;
	write(1, &nbr1, 1);
	write(1, &nbr2, 1);
}

void	ft_print_comb2(void)
{
	int	nbr1;
	int	nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_putnbr(nbr1);
			write(1, " ", 1);
			ft_putnbr(nbr2);
			if (nbr1 != 98)
			{
				write(1, ", ", 2);
			}
			++nbr2;
		}
		++nbr1;
	}
}
