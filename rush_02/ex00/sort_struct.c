/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ascotto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 18:07:00 by ascotto-          #+#    #+#             */
/*   Updated: 2021/07/18 23:12:11 by mchassig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "kayak.h"

void	ft_sort_tab(t_line *struct_tab, int size)
{
	t_line	*temp;

	while (size > 0)
	{
		if (struct_tab[size].key_len > struct_tab[size - 1].key_len)
		{
			temp = &struct_tab[size];
			struct_tab[size] = struct_tab[size - 1];
			struct_tab[size - 1] = *temp;
		}
		else if (ft_strcmp(struct_tab[size].key, struct_tab[size - 1].key) > 0)
		{
			temp = &struct_tab[size];
			struct_tab[size] = struct_tab[size - 1];
			struct_tab[size - 1] = *temp;
		}
		else
			return ;
		size--;
	}
}

t_line	*ft_char_to_struct(char **split_tab, int size)
{
	int		i;
	t_line	*struct_tab;

	struct_tab = malloc(sizeof(t_line) * (size + 1));
	if (struct_tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		struct_tab[i].key = ft_trim_key(split_tab[i]);
		if (struct_tab[i].key == NULL)
			return (NULL);
		struct_tab[i].key_len = ft_strlen(struct_tab[i].key);
		struct_tab[i].value = ft_trim_value(split_tab[i]);
		if (struct_tab[i].value == NULL)
			return (NULL);
		free(split_tab[i]);
		ft_sort_tab(struct_tab, i);
		i++;
	}
	free(split_tab);
	struct_tab[i].key = NULL;
	return (struct_tab);
}
