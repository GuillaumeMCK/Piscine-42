/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:02:39 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/17 18:20:14 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_H
# define SKYSCRAPER_H

# include <unistd.h>

void	ft_putstr(char *str);
void	ft_print_grid(int grid[4][4]);
int		ft_parser(char *str, int views[4][4]);
int		ft_resolve(int grid[4][4], int views[4][4], int x, int y);
int		ft_top_view(int grid[4][4], int views[4][4], int x);
int		ft_bottom_view(int grid[4][4], int views[4][4], int x);
int		ft_left_view(int grid[4][4], int views[4][4], int y);
int		ft_right_view(int grid[4][4], int views[4][4], int y);
void	ft_init_grid(int grid[4][4]);

#endif