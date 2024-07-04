/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:48:10 by imellali          #+#    #+#             */
/*   Updated: 2024/07/03 16:52:58 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isalphabe(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	isdig(char c)
{
	return (c >= '0' && c <= '9');
}

int	isupp(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	islow(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	found;

	i = 0;
	found = 1;
	while (str[i] != '\0')
	{
		if (found == 1 && isalphabe(str[i]))
		{
			if (islow(str[i]))
				str[i] -= 32;
			found = 0;
		}
		else if (found == 0 && isupp(str[i]))
			str[i] += 32;
		else if (!isalphabe(str[i]) && !isdig(str[i]))
			found = 1;
		else if (isdig(str[i]))
			found = 0;
		i++;
	}
	return (str);
}
