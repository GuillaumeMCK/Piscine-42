/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:20:09 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/17 16:15:20 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = nb;
	i = 0;
	while (++i < power)
		res *= nb;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("0:%d\n", ft_iterative_power(1, -10));
// 	printf("0:%d\n", ft_iterative_power(1, -1));
// 	printf("1:%d\n", ft_iterative_power(10, 0));
// 	printf("10:%d\n", ft_iterative_power(10, 1));
// 	printf("100:%d\n", ft_iterative_power(10, 2));
// 	printf("216:%d\n", ft_iterative_power(6, 3));
// }