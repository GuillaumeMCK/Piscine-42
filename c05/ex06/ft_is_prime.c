/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:28:05 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/17 17:29:43 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(-1) == 0);
// 	printf("%d\n", ft_is_prime(-3) == 0);
// 	printf("%d\n", ft_is_prime(0) == 0);
// 	printf("%d\n", ft_is_prime(1) == 0);
// 	printf("%d\n", ft_is_prime(3) == 1);
// 	printf("%d\n", ft_is_prime(4) == 0);
// 	printf("%d\n", ft_is_prime(5) == 1);
// 	printf("%d\n", ft_is_prime(6) == 0);
// 	printf("%d\n", ft_is_prime(7) == 1);
// 	printf("%d\n", ft_is_prime(10) == 0);
// 	printf("%d\n", ft_is_prime(11) == 1);
// 	printf("%d\n", ft_is_prime(19) == 1);
// 	printf("%d\n", ft_is_prime(20) == 0);
// }
