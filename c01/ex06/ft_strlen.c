/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:28:36 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/20 13:49:52 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	lenght;

	if (!str)
		return (0);
	lenght = 0;
	while (*str)
	{
		lenght++;
		str++;
	}
	return (lenght);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	len;

// 	len = ft_strlen("Test");
// 	printf("%d", len);
// 	return (0);
// }
