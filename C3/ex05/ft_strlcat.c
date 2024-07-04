/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:20:21 by imellali          #+#    #+#             */
/*   Updated: 2024/07/04 16:01:49 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_length(dest);
	srclen = ft_length(src);
	i = 0;
	j = 0;
	while (i < size - 1 && src[j] != '\0' && dest[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (destlen + srclen);
}
