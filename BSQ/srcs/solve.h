/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:56:04 by sgardier          #+#    #+#             */
/*   Updated: 2023/08/23 15:51:46 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

# include "parser.h"

typedef struct s_solver
{
	int		solution_top_left_line;
	int		solution_top_left_col;
	int		solution_size;
	t_map	*map;
}			t_solver;

/**
 * @brief Verify if a square at top left position (line,
 *	col) of size size is valid (= doesnt contains obstacle)
 */
int			ft_is_square_valid(t_solver *solver, int line, int col, int size);

/**
 * @brief Recursive search for the biggest square at a top left position in the
 *	map (line, col)
 */
int			ft_find_at_position(t_solver *solver, int line, int col, int size);

/**
 * @brief The main algorithm to find the biggest square,
 *	put in solver.size etc.. the data of the solution
 */
int			ft_find_solution(t_solver *solver);

/**
 * @brief 	Check if a position in the map is part and the solution
 * 			and thus should be displayed with a full character
 */
int			ft_is_in_solution(t_solver *solver, int line, int col);

/**
 * @brief 	Search and print the biggest square from top left of the map
 * 			/!\ The solver have to contain a valid map,
 *				no check are done to verify that /!\
 *
 * @param solver struct containing the map and related data
 * @return int -1 if ERR, 0 if all ok
 */
int			ft_print_solution(t_solver *solver);

#endif