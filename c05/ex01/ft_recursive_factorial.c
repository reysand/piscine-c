/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:53:55 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/18 15:59:32 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb > 1)
	{
		res *= ft_recursive_factorial(nb - 1);
	}
	return (res);
}
