/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardier <sgardier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 12:56:16 by sgardier          #+#    #+#             */
/*   Updated: 2023/08/23 22:29:07 by sgardier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"
#include "solve.h"
#include "utils.h"
#include <stdlib.h>

void	ft_free(t_solver *solver)
{
	if (solver == NULL)
		return ;
	ft_free_map(solver->map);
	free(solver);
}

int	ft_process_map(char *filepath, char *input)
{
	t_solver	*solver;
	char		*buf;

	buf = input;
	if (buf == NULL && ft_get_file_content(filepath, &buf) == ERR)
		return (ERR);
	solver = (t_solver *)malloc(sizeof(t_solver));
	if (!solver || ft_parse_map(&solver->map, buf) == ERR)
	{
		ft_free(solver);
		return (ERR);
	}
	solver->solution_top_left_line = 0;
	solver->solution_top_left_col = 0;
	solver->solution_size = 0;
	if (ft_print_solution(solver) == -1)
	{
		ft_free(solver);
		return (ERR);
	}
	free(buf);
	ft_free(solver);
	return (SUCC);
}

int	main(int argc, char *argv[])
{
	char	*rawmap;
	int		i;

	if (argc <= 1)
	{
		rawmap = ft_map_creator();
		if (rawmap == NULL)
		{
			ft_putstr("map error\n", 2);
			return (1);
		}
		ft_process_map(NULL, rawmap);
	}
	else
	{
		i = 0;
		while (++i < argc)
			if (ft_process_map(argv[i], NULL) == -1)
				ft_putstr("map error\n", 2);
	}
	return (0);
}
