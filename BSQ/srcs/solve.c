/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:56:07 by sgardier          #+#    #+#             */
/*   Updated: 2023/08/23 18:01:00 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include <unistd.h>

int	ft_is_square_valid(t_solver *solver, int line, int col, int size)
{
	int	curr_line;
	int	curr_col;

	curr_line = line;
	while (curr_line < line + size)
	{
		curr_col = col;
		while (curr_col < col + size)
		{
			if (solver->map->map[curr_line][curr_col] == solver->map->obstacle)
				return (0);
			curr_col++;
		}
		curr_line++;
	}
	return (1);
}

int	ft_find_solution_at_position(t_solver *solver, int line, int col, int size)
{
	int	bigger_square;

	if (solver->map->width - col < size || solver->map->height - line < size)
		return (0);
	if (!ft_is_square_valid(solver, line, col, size))
		return (0);
	bigger_square = ft_find_solution_at_position(solver, line, col, size + 1);
	if (bigger_square > size)
		return (bigger_square);
	return (size);
}

int	ft_find_solution(t_solver *solver)
{
	int	curr_solution;
	int	curr_line;
	int	curr_col;

	curr_line = 0;
	while (curr_line < solver->map->height)
	{
		curr_col = 0;
		while (curr_col < solver->map->width)
		{
			curr_solution = ft_find_solution_at_position(solver, curr_line,
					curr_col, solver->solution_size);
			if (curr_solution > solver->solution_size)
			{
				solver->solution_top_left_line = curr_line;
				solver->solution_top_left_col = curr_col;
				solver->solution_size = curr_solution;
			}
			curr_col++;
		}
		curr_line++;
	}
	if (solver->solution_size == 0)
		return (-1);
	return (0);
}

int	ft_is_in_solution(t_solver *solver, int line, int col)
{
	return (line < solver->solution_top_left_line + solver->solution_size
		&& line >= solver->solution_top_left_line
		&& col < solver->solution_top_left_col + solver->solution_size
		&& col >= solver->solution_top_left_col);
}

int	ft_print_solution(t_solver *solver)
{
	int	i;
	int	j;

	if (ft_find_solution(solver) == -1)
		return (-1);
	i = 0;
	while (i < solver->map->height)
	{
		j = 0;
		while (j < solver->map->width)
		{
			if (ft_is_in_solution(solver, i, j))
				write(1, &solver->map->full, 1);
			else
				write(1, &solver->map->map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
