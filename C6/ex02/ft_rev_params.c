/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:27:06 by imellali          #+#    #+#             */
/*   Updated: 2024/07/09 10:31:20 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fpp(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	while (i >= 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			fpp(argv[i][j]);
			j++;
		}
		fpp('\n');
		i--;
	}
	return (0);
}
