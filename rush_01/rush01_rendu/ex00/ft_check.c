#include "ft.h"
int	ft_checkdouble(int **tab, int index, int value)
{
	int		col;
	int		row;
	int		tempcol;
	int		temprow;

	col = index % 4;
	row = index / 4;
	tempcol = col - 1;
	temprow = row - 1;
	while (tempcol >= 0)
	{
		if (value == tab[row][tempcol])
			return (0);
		tempcol--;
	}
	while (temprow >= 0)
	{
		if (value == tab[temprow][col])
			return (0);
		temprow--;
	}
	return (1);
}

int	ft_checkup(int	**condition, int **tab, int index)
{
	int		col;
	int		row;
	int		view;
	int		max;

	col = index % 4;
	row = 0;
	view = 0;
	max = 0;
	while (row < 4)
	{
		if (tab[row][col] > max)
		{
			max = tab[row][col];
			view++;
		}
		row++;
	}
	if (view == condition[0][col])
		return (1);
	return (0);
}

int	ft_checkdown(int **condition, int **tab, int index)
{
	int		col;
	int		row;
	int		view;
	int		max;

	col = index % 4;
	row = 3;
	view = 0;
	max = 0;
	while (row >= 0)
	{
		if (tab[row][col] > max)
		{
			max = tab[row][col];
			view++;
		}
		row--;
	}
	if (view == condition[1][col])
		return (1);
	return (0);
}

int	ft_checkleft(int	**condition, int **tab, int index)
{
	int		row;
	int		col;
	int		view;
	int		max;

	col = 0;
	row = index / 4;
	view = 0;
	max = 0;
	while (col < 4)
	{
		if (tab[row][col] > max)
		{
			max = tab[row][col];
			view++;
		}	
		col++;
	}
	if (view == condition[2][row])
		return (1);
	return (0);
}

int	ft_checkright(int	**condition, int **tab, int index)
{
	int		row;
	int		col;
	int		view;
	int		max;

	col = 3;
	row = index / 4;
	view = 0;
	max = 0;
	while (col >= 0)
	{
		if (tab[row][col] > max)
		{
			max = tab[row][col];
			view++;
		}	
		col--;
	}
	if (view == condition[3][row])
		return (1);
	return (0);
}
