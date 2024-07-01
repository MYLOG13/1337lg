/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:14:35 by imellali          #+#    #+#             */
/*   Updated: 2024/07/01 13:41:32 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isnotprintable(char c)
{
	if (c < 32 || c > 126)
		return (1);
	return (0);
}

void	tohex(int nchar)
{
	int	rem;

	rem = 0;
	while (nchar > 0)
	{
		rem = nchar % 16;
		if (rem < 10)
			ft_putchar(rem + '0');
		else
			ft_putchar(rem + 'a' - 10);
		nchar /= 16;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		if (isnotprintable(str[i]) == 1)
		{
			ft_putchar('\\');
			ft_putchar('0');
			tohex(str[i]);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
