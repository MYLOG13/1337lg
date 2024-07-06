/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:20:21 by imellali          #+#    #+#             */
/*   Updated: 2024/07/04 18:02:58 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_length(dest);
	srclen = ft_length(src);
	if (size == 0 || size <= destlen)
		return (srclen + size);
	i = 0;
	while (i < size - destlen - 1 && src[i] != '\0')
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (srclen + destlen);
}
