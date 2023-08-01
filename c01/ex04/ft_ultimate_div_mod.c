/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 22:31:46 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/03 23:00:38 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}

// #include <unistd.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
//
// 	a = 42;
// 	b = 24;
// 	ft_ultimate_div_mod(&a, &b);
// 	if (a == 1 && b == 18)
// 		write(1, "OK", 2);
// 	return (0);
// }
