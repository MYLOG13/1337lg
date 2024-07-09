/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imellali <imellali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:52:38 by imellali          #+#    #+#             */
/*   Updated: 2024/07/09 10:16:31 by imellali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fpp(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	char	*first;
	int		i;

	(void)argc;
	first = argv[0];
	i = 0;
	while (first[i] != '\0')
	{
		fpp(first[i]);
		i++;
	}
	fpp('\n');
	return (0);
}
