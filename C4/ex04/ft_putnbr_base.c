/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:05:56 by imellali          #+#    #+#             */
/*   Updated: 2024/07/07 20:44:41 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	strln(char *str)
{
	long	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checksign(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '+') || (str[i] == '-'))
			return (1);
		if (str[i] <= 32 || str[i] >= 127)
			return (1);
		i++;
	}
	return (0);
}

int	duplicate(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	convert(long int nbr, char *base)
{
	long		i;
	long		baselength;
	char		digit[128];

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
		write(1, &digit[i - 1], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nm;

	nm = nbr;
	if ((strln(base) < 2) || (checksign(base) == 1) || (duplicate(base) == 1))
		return ;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nm *= -1;
	}
	convert(nm, base);
}
