/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reysand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:06:05 by reysand           #+#    #+#             */
/*   Updated: 2024/06/06 14:08:23 by reysand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
		{
			is_lowercase = 0;
		}
		++str;
	}
	return (is_lowercase);
}
