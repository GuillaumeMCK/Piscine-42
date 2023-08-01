/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:57:04 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/10 07:42:42 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return ;
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

// int	main(void)
// {
// 	ft_putstr("Hello world!");
// 	return (0);
// }
