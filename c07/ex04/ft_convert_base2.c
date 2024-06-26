/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:37:04 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/26 12:38:22 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_base(char *base)
{
	char	*tmp;
	int		len;

	len = 0;
	if (!(*base) || !(*(base + 1)))
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == ' ')
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
		++len;
	}
	return (len);
}

int	isspace(int c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
	{
		return (0);
	}
	return (1);
}

int	isbase(char c, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (*base++ == c)
		{
			return (i);
		}
		++i;
	}
	return (-1);
}

int	getsign(int count)
{
	if (count % 2 == 0)
	{
		return (1);
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	radix;
	int	sign;
	int	space;

	nbr = 0;
	sign = 0;
	space = 0;
	radix = is_valid_base(base);
	if (radix == 0)
		return (0);
	while (*str)
	{
		if (!isspace(*str) && sign == 0 && nbr == 0)
			++space;
		else if ((*str == '-') && nbr == 0)
			++sign;
		else if (isbase(*str, base) != -1)
			nbr = (nbr + isbase(*str, base)) * radix;
		else if (!(*str == '+' && nbr == 0))
			return (nbr * getsign(sign) / radix);
		++str;
	}
	return (nbr * getsign(sign) / radix);
}
