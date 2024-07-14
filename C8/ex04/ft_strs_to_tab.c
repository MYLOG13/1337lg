/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:08:55 by imellali          #+#    #+#             */
/*   Updated: 2024/07/13 15:01:24 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*new;

	i = 0;
	length = ft_strln(src);
	new = malloc(sizeof(char) * (length + 1));
	if (new == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	s_stock_str	*tablo;

	tablo = (s_stock_str *)malloc(sizeof(s_stock_str) * (ac + 1));
	if (tablo == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tablo[i].size = ft_strln(av[i]);
		tablo[i].str = av[i];
		tablo[i].copy = ft_strdup(av[i]);
		if (tablo[i].copy == NULL)
			return (NULL);
		i++;
	}
	tablo[i].size = 0;
	tablo[i].str = NULL;
	tablo[i].copy = NULL;
	return (tablo);
}
