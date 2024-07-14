/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:03:10 by imellali          #+#    #+#             */
/*   Updated: 2024/07/13 17:10:30 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_fpp(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_fpp(str[i]);
		i++;
	}
	ft_fpp('\n');
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483647)
	{
		ft_fpp('-');
		ft_fpp('2');
		nbr = 147483647;
	}
	if (nbr < 0)
	{
		ft_fpp('-');
		nbr = nbr * -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_fpp(nbr + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_fpp('\n');
		ft_putstr(par[i].copy);
		i++;
	}
}
