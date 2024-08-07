/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:51:47 by imellali          #+#    #+#             */
/*   Updated: 2024/07/08 18:15:11 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0 || nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i < nb)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
