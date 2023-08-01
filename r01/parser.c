/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:43:56 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/17 18:16:29 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscraper.h"

int	ft_isdigit(char c)
{
	return (c >= '1' && c <= '4');
}

int	ft_isspace(char c)
{
	return (c == ' ');
}

int	is_valid_digit_or_space(char c)
{
	return (ft_isdigit(c) || ft_isspace(c));
}

void	ft_parse_digit(char c, int views[4][4], unsigned int *y,
		unsigned int *x)
{
	if (*x == 4 - 1)
	{
		*x = 0;
		*y += 1;
	}
	views[*y][*x] = c - '0';
	*x += 1;
}

int	ft_parser(char *str, int views[4][4])
{
	unsigned int	y;
	unsigned int	x;
	unsigned int	count;
	int				i;

	y = 0;
	x = 0;
	count = 0;
	i = -1;
	while (str[++i] != '\0')
	{
		if (is_valid_digit_or_space(str[i]))
		{
			if (ft_isdigit(str[i]))
			{
				ft_parse_digit(str[i], views, &y, &x);
				count++;
			}
		}
		else
			return (1);
	}
	return (count != 16);
}
