/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:35:31 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/10 14:45:55 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define LONG_MAX 9223372036854775807L

void	ft_putlhex(long nbr, int i)
{
	char	hex;

	if (nbr / 16 > 0)
	{
		ft_putlhex(nbr / 16, ++i);
		ft_putlhex(nbr % 16, 16);
	}
	else if (nbr / 16 == 0)
	{
		hex = nbr % 16;
		if (hex > 9)
		{
			hex = hex - 10 + 97;
		}
		else
		{
			hex += 48;
		}
		while (i < 16)
		{
			write(1, "0", 1);
			++i;
		}
		write(1, &hex, 1);
	}
}

void	ft_print_printable_values(void *addr)
{
	if (*(char *)addr < ' ' || *(char *)addr > '~')
	{
		write(1, ".", 1);
	}
	else
	{
		write(1, addr, 1);
	}
}

void	ft_print_values_new(void *addr, int is_hex, int remain)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (remain <= j)
		{
			if (is_hex)
				write(1, "  ", 2);
			else
				j = 16;
		}
		else
		{
			if (is_hex)
				ft_putlhex(*(char *)(addr + j), 15);
			else
				ft_print_printable_values(addr + j);
		}
		if (j % 2 != 0 && is_hex)
			write(1, " ", 1);
		++j;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			ft_putlhex((long)(addr + i), 1);
			write(1, ": ", 2);
		}
		ft_print_values_new(addr + i, 1, size - i);
		ft_print_values_new(addr + i, 0, size - i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
