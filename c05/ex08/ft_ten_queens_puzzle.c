/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhelena <fhelena@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:25:16 by fhelena           #+#    #+#             */
/*   Updated: 2024/06/25 12:40:18 by fhelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define QUEENS_COUNT 10

void	ft_putstr(char *str)
{
	write(1, str, QUEENS_COUNT);
	write(1, "\n", 1);
}

int	ft_is_safe(char *board, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == board[col] || board[i] == board[col] - col + i)
		{
			return (0);
		}
		else if (board[i] == board[col] + col - i)
		{
			return (0);
		}
		++i;
	}
	return (1);
}

int	ft_solve(char *board, int col)
{
	int	count;
	int	row;

	count = 0;
	if (col >= QUEENS_COUNT)
	{
		++count;
		ft_putstr(board);
		return (count);
	}
	row = 0;
	while (row < QUEENS_COUNT)
	{
		board[col] = row + 48;
		if (ft_is_safe(board, col))
		{
			count += ft_solve(board, col + 1);
		}
		++row;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	char	board[QUEENS_COUNT];

	return (ft_solve(board, 0));
}
