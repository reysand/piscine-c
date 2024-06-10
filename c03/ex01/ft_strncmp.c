/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:53:37 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/10 15:59:36 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 && i < n)
	{
		++s1;
		++s2;
		++i;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
