/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:12:48 by imellali          #+#    #+#             */
/*   Updated: 2024/07/09 14:27:38 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int nb)
{
	int	i;

	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb = nb + 1;
	while (1)
	{
		if (check(nb) == 1)
			return (nb);
		nb = nb + 2;
	}
}
