/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:20:08 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/23 19:07:20 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*cpy;

	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * len + 1);
	if (cpy == NULL)
		return (NULL);
	i = -1;
	while (++i, src[i])
		cpy[i] = src[i];
	cpy[i] = 0;
	return (cpy);
}
