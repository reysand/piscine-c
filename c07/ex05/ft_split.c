/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:32:51 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/26 13:46:32 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset++ == c)
		{
			return (1);
		}
	}
	return (0);
}

unsigned int	ft_count_words(char *str, char *charset)
{
	unsigned int	word_counter;

	word_counter = 0;
	while (*str)
	{
		while (ft_is_in_charset(*str, charset) && *str)
		{
			str++;
		}
		if (*str)
		{
			word_counter++;
		}
		while (!ft_is_in_charset(*str, charset) && *str)
		{
			str++;
		}
	}
	return (word_counter);
}

char	*ft_strcpy_charset(char *str, char *charset)
{
	int		i;
	int		str_size;
	char	*copy_str;

	i = 0;
	str_size = 0;
	while (str[i] && !ft_is_in_charset(str[i], charset))
	{
		i++;
		str_size++;
	}
	i = 0;
	copy_str = (char *)malloc((str_size + 1) * sizeof(char));
	while (i < str_size)
	{
		copy_str[i] = str[i];
		i++;
	}
	copy_str[i] = '\0';
	return (copy_str);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strs;
	int		words_amount;

	i = 0;
	words_amount = ft_count_words(str, charset);
	strs = (char **)malloc(++words_amount * sizeof(char *));
	while (*str)
	{
		while (*str && ft_is_in_charset(*str, charset))
		{
			str++;
		}
		if (*str)
		{
			strs[i++] = ft_strcpy_charset(str, charset);
		}
		while (*str && !ft_is_in_charset(*str, charset))
		{
			str++;
		}
	}
	strs[i] = (void *)0;
	return (strs);
}
