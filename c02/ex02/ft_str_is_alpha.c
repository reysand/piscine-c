/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:20:14 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/04 16:36:38 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str)
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
		{
			is_alpha = 0;
		}
		++str;
	}
	return (is_alpha);
}
