/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:14:35 by imellali          #+#    #+#             */
/*   Updated: 2024/07/03 18:50:23 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isnotprintable(char c)
{
	if (c < 32 || c > 126)
		return (1);
	return (0);
}

void	tohex(unsigned char nchar)
{
	char	*hexd;

	hexd = "0123456789abcdef";
	ft_putchar(hexd[nchar / 16]);
	ft_putchar(hexd[nchar % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (isnotprintable(str[i]) == 1)
		{
			ft_putchar('\\');
			tohex((unsigned char)str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
