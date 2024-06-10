/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reysand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:20:11 by reysand           #+#    #+#             */
/*   Updated: 2024/06/06 14:24:14 by reysand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			is_printable = 0;
		}
		++str;
	}
	return (is_printable);
}
