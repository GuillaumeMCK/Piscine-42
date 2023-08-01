/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:34:47 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/14 12:57:02 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = 0;
	factorial = 1;
	while (++i <= nb)
		factorial *= i;
	return (factorial);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(6));
// 	printf("%d\n", ft_iterative_factorial(12));
// }