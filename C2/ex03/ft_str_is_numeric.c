/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:23:28 by imellali          #+#    #+#             */
/*   Updated: 2024/06/28 10:31:31 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (str == NULL)
		return (1);
	while (*str != '\0')
	{
		if ((*str) < '0' || (*str) > '9')
			return (0);
		str++;
	}
	return (1);
}
