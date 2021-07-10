/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:29:47 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/10 22:54:18 by ascotto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_top_to_bot(int **tab, char *str)
{
	int	i;
	int	j;
	int	view;
	int	k;
	int max;

	i = 0;
	j = 0;
	view = 0;
	k = 0;
	max = 1;
	while (i++ < 4)
	{
		while (j++ < 4)
		{	
			if (max >= tab[i][j])
			{
				max = tab[i][j];
				view++;
			}
		}
		if (view != str[k])
			return (0);
		k += 2;
	}
	return (1);
}

int	check_bot_to_top(int **tab, char *str)
{
	int	i;
	int	j;
	int	view;
	int	k;
	int max;

	i = 3;
	j = 3;
	view = 0;
	k = 8;
	max = 1;
	while (i-- >= 0)
	{
		while (j-- >= 0)
		{	
			if (max >= tab[i][j])
			{
				max = tab[i][j];
				view++;
			}
		}
		if (view != str[k])
			return (0);
		k += 2;
	}
	return (1);
}

int	check_left_to_right(int **tab, char *str)
{
	int	i;
	int	j;
	int	view;
	int	k;
	int max;

	i = 0;
	j = 0;
	view = 0;
	k = 16;
	max = 1;
	while (i++ < 4)
	{
		while (j < 4)
		{	
			if (max >= tab[j][i])
			{
				max = tab[j][i];
				view++;
			}
		}
		if (view != str[k])
			return (0);
		k += 2;
	}
	return (1);
}

int	check_right_to_left(int **tab, char *str)
{
	int	i;
	int	j;
	int	view;
	int	k;
	int max;

	i = 3;
	j = 3;
	view = 0;
	k = 24;
	max = 1;
	while (i-- >= 0)
	{
		while (j-- >= 0)
		{	
			if (max >= tab[j][i])
			{
				max = tab[j][i];
				view++;
			}
		}
		if (view != str[k])
			return (0);
		k += 2;
	}
	return (1);
}

int	check_view(int **tab, char *str)
{
	if (check_top_to_bot(tab, str) && check_bot_to_top(tab, str)
		&& check_right_to_left(tab, str) && check_left_to_right(tab, str))
		return (1);
	return (0);
}

