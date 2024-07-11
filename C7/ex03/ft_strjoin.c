/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 08:49:30 by imellali          #+#    #+#             */
/*   Updated: 2024/07/11 13:48:04 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_calclength(char *sp, char **str, int size)
{
	int	sepsize;
	int	totalsize;
	int	i;
	int	j;

	i = 0;
	sepsize = 0;
	totalsize = 0;
	while (sp[sepsize] != '\0')
		sepsize++;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			totalsize++;
			j++;
		}
		if (i < size - 1)
			totalsize += sepsize;
		i++;
	}
	return (totalsize);
}

void	ft_concat(char *newStr, char **str, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	idx;

	i = 0;
	idx = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
			newStr[idx++] = str[i][j++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k] != '\0')
				newStr[idx++] = sep[k++];
		}
		i++;
	}
	newStr[idx] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstring;
	int		total;

	total = ft_calclength(sep, strs, size);
	newstring = malloc(sizeof(char) * (total + 1));
	if (newstring == NULL)
		return (NULL);
	if (size == 0)
	{
		newstring[0] = '\0';
		return (newstring);
	}
	ft_concat(newstring, strs, sep, size);
	return (newstring);
}
