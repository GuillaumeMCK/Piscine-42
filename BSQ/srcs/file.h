/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:05:51 by sgardier          #+#    #+#             */
/*   Updated: 2023/08/23 18:13:22 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H
# define BUFFER_SIZE 4096

/**
 * @brief Returns the size of a file in bytes
 *
 * @param filename
 * @return long long
 */
long long	ft_get_file_size_in_bytes(char *filename);

/**
 * @brief 	Returns the content of the file in buffer, newly allocated.
 * 			/!\ Have to be freed by the caller /!\
 *
 * @param filename the name of the file to open
 * @param buffer the pointer to the string in which put the file content
 * @return int 0 if all ok, -1 in case of ERR
 */
int			ft_get_file_content(char *filename, char **buffer);

#endif
