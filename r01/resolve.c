/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 21:37:28 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/14 14:15:31 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_contain_nbr(int grid[4][4], int nbr, int x, int y)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (grid[y][i] == nbr || grid[i][x] == nbr)
			return (1);
	}
	return (0);
}

int	ft_get_next_empty_case(int grid[4][4], int *x, int *y)
{
	int	row;
	int	col;

	row = -1;
	while (++row < 4)
	{
		col = -1;
		while (++col < 4)
		{
			if (grid[row][col] == 0)
			{
				*x = col;
				*y = row;
				return (1);
			}
		}
	}
	return (0);
}

int	ft_resolve(int grid[4][4], int views[4][4], int x, int y)
{
	int	nbr;

	if (ft_get_next_empty_case(grid, &x, &y))
	{
		nbr = 0;
		while (++nbr <= 4)
		{
			if (!ft_contain_nbr(grid, nbr, x, y))
			{
				grid[y][x] = nbr;
				if (x == 3 && ft_left_view(grid, views, y)
					&& ft_right_view(grid, views, y))
					continue ;
				if (y == 3 && ft_top_view(grid, views, x)
					&& ft_bottom_view(grid, views, x))
					continue ;
				if (ft_resolve(grid, views, x, y))
					return (1);
			}
		}
		grid[y][x] = 0;
		return (0);
	}
	return (1);
}
