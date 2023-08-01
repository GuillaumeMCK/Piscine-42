/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardier <sgardier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:45:17 by sgardier          #+#    #+#             */
/*   Updated: 2023/08/23 21:39:41 by sgardier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#include "parser.h"
#include "utils.h"

t_map	*ft_parse_header(char *buf, int *offset_to_next_line)
{
	t_map	*map;
	int		i;

	if (buf == NULL)
		return (NULL);
	map = (t_map *)malloc(sizeof(t_map));
	if (map == NULL)
		return (NULL);
	i = 0;
	while (buf[i] != '\n' && buf[i] != 0)
		i++;
	if (i < 4)
		return (NULL);
	map->height = ft_atoil(buf, i - 3);
	if (map->height <= 0)
		return (NULL);
	map->full = buf[i - 1];
	map->obstacle = buf[i - 2];
	map->empty = buf[i - 3];
	if (buf[i] == 0 && offset_to_next_line)
		*offset_to_next_line = ERR;
	else if (offset_to_next_line)
		*offset_to_next_line = i + 1;
	return (map);
}

char	*ft_realloc(char *str, int additional_space)
{
	int		original_size;
	int		new_size;
	char	*new_str;

	if (str == NULL || additional_space < 0)
		return (NULL);
	original_size = ft_strlen(str);
	new_size = original_size + additional_space;
	new_str = (char *)malloc((new_size + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, str);
	free(str);
	return (new_str);
}

char	*ft_read_stdin(void)
{
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	bytes_read = read(STDIN_FILENO, buffer, BUFFER_SIZE - 1);
	if (bytes_read <= 0)
		return (NULL);
	buffer[bytes_read] = 0;
	return (ft_strdup(buffer));
}

char	*ft_free_buffers(char *buffer, char *output)
{
	if (!buffer)
		free(buffer);
	if (!output)
		free(output);
	return (NULL);
}

char	*ft_map_creator(void)
{
	t_map	*map_infos;
	char	*buffer;
	char	*output;

	buffer = ft_read_stdin();
	if (buffer == NULL)
		return (NULL);
	map_infos = ft_parse_header(buffer, NULL);
	if (map_infos == NULL)
		return (ft_free_buffers(buffer, NULL));
	output = ft_strdup(buffer);
	if (output == NULL)
		return (ft_free_buffers(buffer, NULL));
	if (ft_map_creator_lines(map_infos, &output) == -1)
		return (NULL);
	free(map_infos);
	free(buffer);
	return (output);
}
