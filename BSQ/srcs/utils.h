/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:29:15 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/23 20:35:52 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

# define ERR -1
# define SUCC 0

/**
 * @brief Put a string on the standard output.
 *
 * @param str The string to put on the standard output.
 * @param output The std output to use.
 * @return void
 */
void	ft_putstr(char *str, int output);

/**
 * @brief Get the length of a string.
 *
 * @param str The string to get the length.
 * @return int The length of the string.
 */
int		ft_strlen(char *str);

/**
 * @brief Convert ASCII to an integer with the given string length.
 *
 * @param str The string to convert (only numbers are allowed).
 * @param len The length of the string.
 * @return int The integer converted. If str contains other characters than
 * numbers, it returns -1.
 */
int		ft_atoil(char *str, int len);

/**
 * @brief Add src after dest
 *
 * @param dest The dest string
 * @param src The src string
 * @return int The len of dest
 */
char	*ft_strcat(char *dest, char *src);

/**
 * @brief Cpy a string to another one
 *
 * @param dest The dest string
 * @param src The src string
 * @return the string
 */
char	*ft_strcpy(char *dest, char *src);

/**
 * @brief Copy a str in memorie
 *
 * @param src The dest string
 * @return the string
 */
char	*ft_strdup(char *src);

/**
 * @brief Return the len of a string
 *
 * @param src The dest string
 * @return integer
 */
int		ft_strlen(char *str);

#endif