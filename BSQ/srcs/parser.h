/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardier <sgardier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 08:44:54 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/23 23:05:58 by sgardier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# include "file.h"
# include "utils.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_map
{
	int		height;
	int		width;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
}			t_map;

/**
 * @brief Free the map
 *
 * @param map The map structure
 */
void		ft_free_map(t_map *map);

/**
 * @brief Parse the first line of the map
 *
 * @param buf The content of the line
 * @param offset_to_next_line Nbr of char to the next line
 * @return t_map pointer.
 */
t_map		*ft_parse_header(char *buf, int *offset_to_next_line);

/**
 * @brief Parse the infos of the map
 *
 * @param map The map structure
 * @param buf The buffer containing the first line
 * @return int 0 if the parsing was SUCCful, 1 otherwise
 */
int			ft_parse_infos(t_map **map, char *buf);

/**
 * @brief Parse the map
 *
 * @param map The map structure
 * @param filepath The path to the file
 * @return int 0 if the parsing was SUCCful, 1 otherwise
 */
int			ft_parse_map(t_map **map, char *filepath);

/**
 * @brief Allocate the map
 *
 * @param map The map structure
 * @return int 0 if the allocation was SUCCful, 1 otherwise
 */
int			ft_allocate_map(t_map *map);

/**
 * @brief Create a string that contain the map from stantard input
 *
 * @return String or NULL if an error occurs
 */
char		*ft_map_creator(void);

char		*ft_free_buffers(char *buffer, char *output);

int			ft_map_creator_lines(t_map *map_infos, char **output);

char		*ft_realloc(char *str, int additional_space);

char		*ft_read_stdin(void);

#endif
