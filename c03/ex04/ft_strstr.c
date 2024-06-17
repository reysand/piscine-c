/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:00:36 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/14 16:18:27 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*res;
	char	*tmp;

	tmp = to_find;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (!res)
			{
				res = str;
			}
			++to_find;
		}
		else if (res && *to_find)
		{
			res = (void *)0;
			to_find = tmp;
		}
		++str;
	}
	return (res);
}
