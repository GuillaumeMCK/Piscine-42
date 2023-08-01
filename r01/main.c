/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:24:06 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/14 08:51:49 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	main(int argc, char *argv[])
{
	int views[4][4];
	int grid[4][4];
	int err;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	err = ft_parser(argv[1], views);
	if (err)
	{
		ft_putstr("Error\n");
		return (1);
	}

	ft_init_grid(grid);
	err = ft_resolve(grid, views, 0, 0);
	if (!err)
	{
		ft_putstr("Error\n");
		ft_print_grid(grid);
		return (1);
	}

	ft_print_grid(grid);
	return (0);
}