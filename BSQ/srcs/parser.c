/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardier <sgardier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 08:44:50 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/23 20:31:32 by sgardier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#include "parser.h"
#include "utils.h"

int	ft_parse_infos(t_map **map, char *buf)
{
	int	i;

	if (map == NULL || buf == NULL)
		return (ERR);
	*map = ft_parse_header(buf, &i);
	if (*map == NULL || i == -1)
		return (ERR);
	(*map)->width = 0;
	while (buf[i + (*map)->width] != '\n')
		(*map)->width++;
	return (SUCC);
}

int	ft_allocate_map(t_map *map)
{
	int	i;

	map->map = (char **)malloc(sizeof(char *) * map->height);
	if (map->map == NULL)
		return (ERR);
	i = -1;
	while (++i < map->height)
	{
		map->map[i] = (char *)malloc(sizeof(char) * map->width);
		if (map->map[i] == NULL)
		{
			while (--i >= 0)
				free(map->map[i]);
			free(map->map);
			return (ERR);
		}
	}
	return (SUCC);
}

int	ft_fill_map(t_map *map, char *buf)
{
	int	buf_idx;
	int	i;
	int	j;

	buf_idx = 0;
	while (buf[buf_idx] != '\n' && buf[buf_idx] != '\0')
		buf_idx++;
	if (buf[buf_idx] == '\0')
		return (ERR);
	i = -1;
	while (++buf_idx, ++i < map->height)
	{
		j = -1;
		while (++j < map->width)
		{
			if (buf[buf_idx] != map->empty && buf[buf_idx] != map->obstacle)
				return (ERR);
			map->map[i][j] = buf[buf_idx];
			buf_idx++;
		}
		if (buf[buf_idx] != '\n')
			return (ERR);
	}
	return (SUCC);
}

void	ft_free_map(t_map *map)
{
	int	i;

	if (map == NULL)
		return ;
	i = -1;
	while (++i < map->height)
	{
		if (map->map != NULL && map->map[i] != NULL)
			free(map->map[i]);
	}
	free(map->map);
	free(map);
}

int	ft_parse_map(t_map **map, char *buf)
{
	if (ft_parse_infos(map, buf) == ERR)
		return (ERR);
	if ((*map)->height <= 0 || (*map)->width <= 0
		|| (*map)->full == (*map)->empty || (*map)->full == (*map)->obstacle
		|| (*map)->empty == (*map)->obstacle)
		return (ERR);
	if (ft_allocate_map(*map) == ERR)
		return (ERR);
	if (ft_fill_map((*map), buf) == ERR)
		return (ERR);
	return (SUCC);
}
