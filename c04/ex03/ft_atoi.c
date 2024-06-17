/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:56:38 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/17 15:37:15 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isspace(int c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
	{
		return (0);
	}
	return (1);
}

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	return (1);
}

int	getsign(int count)
{
	if (count % 2 == 0)
	{
		return (1);
	}
	return (-1);
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;
	int	space;

	nbr = 0;
	sign = 0;
	space = 0;
	while (*str)
	{
		if (!isspace(*str) && sign == 0 && nbr == 0)
			++space;
		else if ((*str == '-') && nbr == 0)
			++sign;
		else if (!isdigit(*str))
		{
			nbr += *str - 48;
			nbr *= 10;
		}
		else if (!(*str == '+' && nbr == 0))
			return (nbr * getsign(sign) / 10);
		++str;
	}
	return (nbr * getsign(sign) / 10);
}
