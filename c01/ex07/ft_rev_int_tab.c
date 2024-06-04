/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:27:22 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/04 13:52:43 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	rev_i;

	i = 0;
	rev_i = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[rev_i];
		tab[rev_i] = temp;
		++i;
		--rev_i;
	}
}
