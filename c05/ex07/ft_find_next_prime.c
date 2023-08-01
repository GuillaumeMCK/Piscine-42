/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:45:45 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/19 15:35:47 by gmucwick         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(-1) == 2);
// 	printf("%d\n", ft_find_next_prime(-3) == 2);
// 	printf("%d\n", ft_find_next_prime(0) == 2);
// 	printf("%d\n", ft_find_next_prime(1) == 2);
// 	printf("%d\n", ft_find_next_prime(2) == 2);
// 	printf("%d\n", ft_find_next_prime(3) == 3);
// 	printf("%d\n", ft_find_next_prime(4) == 5);
// 	printf("%d\n", ft_find_next_prime(5) == 5);
// 	printf("%d\n", ft_find_next_prime(6) == 7);
// 	printf("%d\n", ft_find_next_prime(7) == 7);
// 	printf("%d\n", ft_find_next_prime(10) == 11);
// 	printf("%d\n", ft_find_next_prime(11) == 11);
// 	printf("%d\n", ft_find_next_prime(13) == 13);
// 	printf("%d\n", ft_find_next_prime(19) == 19);
// 	printf("%d\n", ft_find_next_prime(20) == 23);
// 	printf("%d\n", ft_find_next_prime(2147483647));
// 	return (0);
// }