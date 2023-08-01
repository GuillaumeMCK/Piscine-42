/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardier <sgardier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 21:17:58 by sgardier          #+#    #+#             */
/*   Updated: 2023/08/23 21:40:15 by sgardier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#include "parser.h"
#include "utils.h"
#include <stdlib.h>

int	ft_map_creator_lines(t_map *map_infos, char **output)
{
	char	*line;
	int		i;

	i = -1;
	while (++i < map_infos->height)
	{
		line = ft_read_stdin();
		if (line == NULL)
			return (-1);
		*output = ft_realloc(*output, ft_strlen(line));
		ft_strcat(*output, line);
		free(line);
	}
	return (0);
}
