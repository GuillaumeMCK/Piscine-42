/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 05:53:41 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/12 22:35:58 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int x, char first, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i != x)
			ft_putchar(middle);
		else
			ft_putchar(last);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x < 1 || y < 1)
		return (1);
	i = 1;
	while (i <= y)
	{
		if (i == 1)
			ft_print_line(x, 'A', 'B', 'C');
		else if (i != y)
			ft_print_line(x, 'B', ' ', 'B');
		else
			ft_print_line(x, 'A', 'B', 'C');
		i++;
	}
}
