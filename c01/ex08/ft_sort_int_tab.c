/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:56:29 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/04 14:33:12 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	is_sorted;

	i = 0;
	is_sorted = 1;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			is_sorted *= 0;
			ft_swap(&tab[i], &tab[i + 1]);
		}
		++i;
		if (i == size - 1 && is_sorted == 0)
		{
			i = 0;
			is_sorted = 1;
		}
	}
}
