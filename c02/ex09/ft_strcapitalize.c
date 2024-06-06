/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reysand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:01:47 by reysand           #+#    #+#             */
/*   Updated: 2024/06/06 15:38:39 by reysand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_is_alphanum(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	char	*prev;

	ptr = str;
	prev = str;
	while (*str)
	{
		if (prev == ptr && prev == str && ft_is_alphanum(*str))
		{
			if (ft_is_lowercase(*str))
			{
				*str -= 32;
			}
		}
		else if (!ft_is_alphanum(*prev) && ft_is_alphanum(*str) && prev != str)
		{
			if (ft_is_lowercase(*str))
			{
				*str -= 32;
			}
		}
		prev = str;
		++str;
	}
	return (ptr);
}
