/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:27:27 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/17 16:15:39 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("0:%d\n", ft_recursive_power(1, -10));
// 	printf("0:%d\n", ft_recursive_power(1, -1));
// 	printf("1:%d\n", ft_recursive_power(10, 0));
// 	printf("10:%d\n", ft_recursive_power(10, 1));
// 	printf("100:%d\n", ft_recursive_power(10, 2));
// 	printf("216:%d\n", ft_recursive_power(6, 3));
// }