/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:38:52 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/24 09:19:55 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_issign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_isnumeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	if (!str)
		return (0);
	sign = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	while (ft_issign(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isnumeric(*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
