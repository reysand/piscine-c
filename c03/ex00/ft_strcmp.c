/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:26:23 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/10 15:51:51 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1)
	{
		++s1;
		++s2;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
