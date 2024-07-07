/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:05:56 by imellali          #+#    #+#             */
/*   Updated: 2024/07/07 10:24:45 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fprint(char c)
{
	write(1, &c, 1);
}

int	strln(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	convert(int nbr, char *base)
{
	int		i;
	int		baselength;
	char	digit[128];

	i = 0;
	baselength = strln(base);
	while (nbr != 0)
	{
		digit[i] = base[nbr % baselength];
		nbr = nbr / baselength;
		i++;
	}
	while (i != 0)
	{
		fprint(digit[i - 1]);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (strln(base) < 2)
		return ;
	if (nbr < 0)
	{
		fprint('-');
		nbr = -nbr;
	}
	convert(nbr, base);
}
