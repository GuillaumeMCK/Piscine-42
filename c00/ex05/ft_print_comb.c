/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:11:58 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/04 09:50:49 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number_with_comma(char hundred, char tenth, char unit)
{
	write(1, &hundred, 1);
	write(1, &tenth, 1);
	write(1, &unit, 1);
	if (hundred != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	tenth;
	char	unit;

	hundred = '0';
	while (hundred <= '7')
	{
		tenth = hundred + 1;
		while (tenth <= '8')
		{
			unit = tenth + 1;
			while (unit <= '9')
			{
				write_number_with_comma(hundred, tenth, unit);
				unit++;
			}
			tenth++;
		}
		hundred++;
	}
}
