#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		valid_strings(char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		if (ft_strlen(argv[i + 1]) != 9)
			return (0);
		j = 0;
		while (j < 9)
		{
			if ((argv[i + 1][j] >= '1' && argv[i + 1][j] <= '9') ||
			argv[i + 1][j] == '.')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int		valid_cell(char **board, int y, int x)
{
	int i;
	int block_y;
	int block_x;

	block_y = (y / 3) * 3;
	block_x = (x / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (i != x && board[y][i] == board[y][x])
			return (0);
		if (i != y && board[i][x] == board[y][x])
			return (0);
		if (block_y + (i % 3) != y && block_x + (i % 3) != x)
			if (board[block_y + (i / 3)][block_x + (i % 3)] == board[y][x])
				return (0);
		i++;
	}
	return (1);
}

int		solve_sudoku(char **board)
{
	int		x;
	int		y;
	char	k;

	x = 0;
	while (x++ < 9)
	{
		y = 0;
		while (y++ < 9)
		{
			k = '1';
			if (board[x - 1][y - 1] == '.')
			{
				while (k <= '9')
				{
					board[x - 1][y - 1] = k++;
					if (valid_cell(board, x - 1, y - 1) && solve_sudoku(board))
						return (1);
					board[x - 1][y - 1] = '.';
				}
				return (0);
			}
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 10 && valid_strings(argv))
	{
		if (solve_sudoku(argv + 1))
		{
			while (i < 9)
			{
				write(1, argv[i + 1], 9);
				ft_putchar('\n');
				i++;
			}
			return (0);
		}
	}
	write(1, "Error", 5);
	write(1, "\n", 1);
	return (0);
}
