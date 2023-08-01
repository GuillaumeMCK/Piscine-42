/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:36:34 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/17 17:49:35 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0:%d\n", ft_fibonacci(0));
// 	printf("1:%d\n", ft_fibonacci(1));
// 	printf("1:%d\n", ft_fibonacci(2));
// 	printf("2:%d\n", ft_fibonacci(3));
// 	printf("55:%d\n", ft_fibonacci(10));
// }