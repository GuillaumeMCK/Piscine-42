/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:45:01 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/08 13:24:06 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char_to_hex(char c, char *hex)
{
	char	*base;

	if (hex == NULL)
		return ;
	base = "0123456789abcdef";
	hex[0] = base[c / 16];
	hex[1] = base[c % 16];
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[2];
	int		i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_char_to_hex(str[i], hex);
			write(1, "\\", 1);
			write(1, hex, 2);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	*str = "Coucou\ntu vas bien ?";
//
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
