/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 07:34:04 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/14 08:50:12 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_left_view(int grid[4][4], int views[4][4], int y)
{
	int		max_size;
	int		view;
	int		i;
	char	current;

	max_size = 0;
	view = 0;
	i = 0;
	while (i < 4)
	{
		current = grid[y][i];
		view += current > max_size;
		if (current > max_size)
			max_size = current;
		i++;
	}
	return (view == views[2][y]);
}

int	ft_right_view(int grid[4][4], int views[4][4], int y)
{
	int		max_size;
	int		view;
	int		i;
	char	current;

	max_size = 0;
	view = 0;
	i = 3;
	while (i >= 0)
	{
		current = grid[y][i];
		view += current > max_size;
		if (current > max_size)
			max_size = current;
		i--;
	}
	return (view == views[3][y]);
}

int	ft_top_view(int grid[4][4], int views[4][4], int x)
{
	int		max_size;
	int		view;
	int		i;
	char	current;

	max_size = 0;
	view = 0;
	i = 0;
	while (i < 4)
	{
		current = grid[i][x];
		view += current > max_size;
		if (current > max_size)
			max_size = current;
		i++;
	}
	return (view == views[0][x]);
}

int	ft_bottom_view(int grid[4][4], int views[4][4], int x)
{
	int		max_size;
	int		view;
	int		i;
	char	current;

	max_size = 0;
	view = 0;
	i = 3;
	while (i >= 0)
	{
		current = grid[i][x];
		view += current > max_size;
		if (current > max_size)
			max_size = current;
		i--;
	}
	return (view == views[1][x]);
}
