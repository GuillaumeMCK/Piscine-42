/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:17:48 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/04 11:27:36 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_digit(int num)
{
	char	str[2];

	str[0] = '0' + num / 10;
	str[1] = '0' + num % 10;
	write(1, str, 2);
}

void	write_numbers(int first_digit, int second_digit)
{
	write_digit(first_digit);
	write(1, " ", 1);
	write_digit(second_digit);
}

void	ft_print_comb2(void)
{
	int	first_digit;
	int	second_digit;

	first_digit = 0;
	while (first_digit <= 98)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 99)
		{
			write_numbers(first_digit, second_digit);
			if (first_digit < 98)
			{
				write(1, ", ", 2);
			}
			second_digit++;
		}
		first_digit++;
	}
}
