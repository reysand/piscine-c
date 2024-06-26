/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:26:13 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/26 13:31:02 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define INT_MAX 2147483647

int	is_valid_base(char *base);
int	ft_atoi_base(char *str, char *base);

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

int	ft_nbrlen_base(int nbr, int base)
{
	int	len;

	len = 0;
	if (nbr == -INT_MAX - 1)
	{
		len += 2;
		nbr = INT_MAX % 1000000000 + 1;
	}
	else if (nbr < 0)
	{
		nbr *= -1;
	}
	else if (nbr == 0)
	{
		return (1);
	}
	while (nbr > 0)
	{
		nbr /= base;
		++len;
	}
	return (len);
}

char	*ft_putnbr_base(char *result, int nbr, char *base)
{
	if (nbr == -INT_MAX - 1)
	{
		result[0] = '-';
		result[1] = '2';
		result += 2;
		nbr = INT_MAX % 1000000000 + 1;
	}
	else if (nbr < 0)
	{
		*result = '-';
		result++;
		nbr = -nbr;
	}
	if (nbr >= ft_strlen(base))
	{
		ft_putnbr_base(result, nbr / ft_strlen(base), base);
		++result;
		ft_putnbr_base(result, nbr % ft_strlen(base), base);
	}
	else
	{
		*result = base[nbr];
		++result;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		nbr_dec;
	int		radix;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
	{
		return (NULL);
	}
	nbr_dec = ft_atoi_base(nbr, base_from);
	radix = ft_strlen(base_to);
	result = (char *)malloc(ft_nbrlen_base(nbr_dec, radix) * sizeof(int));
	ft_putnbr_base(result, nbr_dec, base_to);
	*(result + ft_nbrlen_base(nbr_dec, radix)) = '\0';
	return (result);
}
