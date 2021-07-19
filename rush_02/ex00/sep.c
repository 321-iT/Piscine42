#include <stdlib.h>
#include "kayak.h"

int	ft_display_sep(char *sep, int len, t_line *tab)
{
	int	j;

	sep[0] = '1';
	sep[len] = '\0';
	j = 1;
	while (j < len)
	{
		sep[j] = '0';
		j++;
	}
	return (ft_find_key(sep, len, tab, -1));
}

int	ft_sep(t_line *tab, int len)
{
	char	*sep;
	int		index_sep;

	sep = malloc(sizeof(char) * (len + 1));
	if (sep == NULL)
		return (0);
	index_sep = ft_display_sep(sep, len, tab);
	if (index_sep == -1)
		return (0);
	free(sep);
	return (index_sep);
}
