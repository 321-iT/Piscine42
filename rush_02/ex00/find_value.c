#include <stdlib.h>
#include <stdio.h>
#include "kayak.h"

void	ft_putstr_value(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar(' ');
}

int	ft_find_key(char *to_find, int len, t_line *tab, int i)
{
	int	diff;

	while (tab[++i].key != NULL)
	{
		if (len > tab[i].key_len)
		{
			ft_putstr_error("Dict Error\n");
			return (-1);
		}
		if (len == tab[i].key_len)
		{
			diff = ft_strcmp(to_find, tab[i].key);
			if (diff > 0)
			{
				ft_putstr_error("Dict Error\n");
				return (-1);
			}
			else if (diff == 0)
			{
				ft_putstr_value(tab[i].value);
				return (i);
			}
		}
	}
	return (-1);
}

char	*ft_str_formatting(char *src, int len, int start)
{
	char	*dest;
	int		i;
	int		j;

	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	i = 0;
	j = 0;
	while (dest[i])
	{
		if (i < start)
			dest[i] = '0';
		else
		{
			dest[i] = src[j];
			j++;
		}
		i++;
	}
	return (dest);
}

int	ft_display_value(t_line *tab, char *input)
{
	int		i;
	int		size;
	int		len;
	int		nb_triplet;
	char	*str;

	len = ft_strlen(input);
	size = ft_size_first_triplet(len);
	nb_triplet = (len - size) / 3 + 1;
	str = ft_str_formatting(input, len + 3 - size, 3 - size);
	if (str == NULL)
		return (0);
	i = 0;
	while (len > 0)
	{
		ft_triplet(tab, str, size, i);
		i += 3;
		size = 3;
		len -= 3;
		if (len > 0)
			ft_sep(tab, len + 3);
	}
	return (1);
}
