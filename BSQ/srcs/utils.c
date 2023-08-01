/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:20:08 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/23 23:23:49 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\v' && c != '\n') || c == '\f'
		|| c == '\r');
}

int	ft_atoil(char *str, int len)
{
	int	res;

	if (!str)
		return (-1);
	res = 0;
	while ((*str >= '0' && *str <= '9') && len > 0)
	{
		res = (res * 10) + (*str - '0');
		str++;
		len--;
	}
	if (len != 0)
		return (-1);
	return (res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str, int output)
{
	write(output, str, ft_strlen(str));
}

char	*ft_strcat(char *dest, char *src)
{
	char			*dest_origin;
	unsigned int	cur_src;

	dest_origin = dest;
	dest += ft_strlen(dest);
	cur_src = 0;
	while (src[cur_src])
	{
		*dest = src[cur_src];
		dest++;
		cur_src++;
	}
	*dest = 0;
	return (dest_origin);
}
