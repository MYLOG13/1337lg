/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:48:10 by imellali          #+#    #+#             */
/*   Updated: 2024/07/01 19:01:48 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalphabe(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	found;

	i = 0;
	found = 1;
	while (str[i] != '\0')
	{
		if (found == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			found = 0;
		}
		if (!(isalphabe(str[i])))
			found = 1;
		if (isalpabe(str[i]) && isalphabe(str[i - 1]) && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= '0' && str[i] <= '9')
			found = 0;	
		i++;
	}
	return (str);
}
