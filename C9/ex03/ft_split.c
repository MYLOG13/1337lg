/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:26:19 by imellali          #+#    #+#             */
/*   Updated: 2024/07/18 20:51:09 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkch(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ztrdp(char *str, char *c)
{
	char	*p;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		if (str[len] != '\0' && checkch(str[len], c) == 1)
			break ;
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	chr;

	i = 0;
	chr = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && checkch(str[i], charset) == 1)
			i++;
		if (str[i] != '\0' && checkch(str[i], charset) == 0)
			chr++;
		while (str[i] != '\0' && checkch(str[i], charset) == 0)
			i++;
	}
	return (chr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		len;
	char	**new;

	i = 0;
	j = 0;
	len = ft_count_words(str, charset);
	new = malloc(sizeof(char *) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (str[i])
	{
		while (str[i] != '\0' && checkch(str[i], charset) == 1)
			i++;
		if (str[i] != '\0' && checkch(str[i], charset) == 0)
		{
			new[j] = ztrdp(str + i, charset);
			j++;
		}
		while (str[i] != '\0' && checkch(str[i], charset) == 0)
			i++;
	}
	new[j] = NULL;
	return (new);
}
