/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardier <sgardier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:06:57 by sgardier          #+#    #+#             */
/*   Updated: 2023/08/23 23:14:14 by sgardier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

long long	ft_get_file_size_in_bytes(char *filename)
{
	char	buffer[1];
	int		size_in_bytes;
	int		file_id;

	size_in_bytes = 0;
	file_id = open(filename, O_RDONLY);
	if (file_id == -1)
		return (-1);
	while (read(file_id, buffer, 1) && errno != EISDIR)
		size_in_bytes++;
	close(file_id);
	return (size_in_bytes);
}

int	ft_get_file_content(char *filename, char **buffer)
{
	long long	file_size;
	int			file_id;

	file_size = ft_get_file_size_in_bytes(filename);
	if (file_size == -1)
		return (-1);
	(*buffer) = (char *)malloc(sizeof(char) * (file_size + 1));
	file_id = open(filename, O_RDONLY);
	if (file_id == -1)
		return (-1);
	read(file_id, (*buffer), file_size);
	close(file_id);
	(*buffer)[file_size] = '\0';
	return (0);
}
