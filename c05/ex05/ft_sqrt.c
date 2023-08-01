/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:11:42 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/18 20:31:53 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	i = 1;
	while (i < nb / i)
		i++;
	if (i * i != nb)
		return (0);
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("10 %d\n", ft_sqrt(100));
// 	printf("6 %d\n", ft_sqrt(36));
// 	printf("0 %d\n", ft_sqrt(37));
// 	printf("100 %d\n", ft_sqrt(10000));
// 	printf("0 %d\n", ft_sqrt(10001));
// 	printf("2000 %d\n", ft_sqrt(4000000));
// 	printf("0 %d\n", ft_sqrt(2147483647));
// 	printf("0 %d\n", ft_sqrt(-36));
// 	return (0);
// }