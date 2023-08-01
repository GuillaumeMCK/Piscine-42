/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:34:30 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/13 18:03:55 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_grid(int grid[4][4])
{
	int	y;
	int	x;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
		{
			ft_putchar('0' + grid[y][x]);
			if (x != 4 - 1)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	ft_init_grid(int grid[4][4])
{
	int	x;
	int	y;

	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
			grid[y][x] = 0;
	}
}
