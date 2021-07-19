#include <stdlib.h>
#include "kayak.h"

int	ft_size_first_triplet(int len)
{
	if (len % 3 == 0)
		return (3);
	else if (len % 3 == 2)
		return (2);
	else
		return (1);
}

int	ft_display_100(t_line *tab, char *triplet, int len)
{
	int		found;
	char	trip_copy[4];

	if (len == 0)
	{
		trip_copy[2] = triplet[0];
		found = ft_find_key(&trip_copy[2], 1, tab, 0);
		if (found == -1)
			return (-1);
		found = ft_find_key("100", 3, tab, 0);
		if (found == -1)
			return (-1);
	}
	return (1);
}

int	ft_display_10(t_line *tab, char *triplet, int len)
{
	int		found;
	char	trip_copy[4];

	trip_copy[0] = triplet[0];
	trip_copy[2] = '0';
	if (len <= 1)
	{
		if (triplet[1] == '1')
		{
			found = ft_find_key(&triplet[1], 2, tab, 0);
			if (found == -1)
				return (-1);
			return (1);
		}
		else
		{
			trip_copy[1] = triplet[1];
			found = ft_find_key(&trip_copy[1], 2, tab, 0);
			if (found == -1)
				return (-1);
		}
	}
	return (1);
}

int	ft_display_1(t_line *tab, char *triplet, int len)
{
	int		found;

	if (len <= 2)
	{
		found = ft_find_key(&triplet[2], 1, tab, 0);
		if (found == -1)
			return (-1);
	}
	return (1);
}

int	ft_triplet(t_line *tab, char *str, int size, int i)
{
	char	triplet[4];

	triplet[0] = str[i];
	triplet[1] = str[i + 1];
	triplet[2] = str[i + 2];
	if (ft_display_100(tab, triplet, 3 - size) == -1)
		return (0);
	if (ft_display_10(tab, triplet, 3 - size) == -1)
		return (0);
	if (ft_display_1(tab, triplet, 3 - size) == -1)
		return (0);
	return (1);
}
