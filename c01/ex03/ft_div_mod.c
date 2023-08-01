/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 22:24:02 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/03 23:00:54 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include <unistd.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;
//
// 	a = 42;
// 	b = 24;
// 	ft_div_mod(a, b, &div, &mod);
// 	if (div == 1 && mod == 18)
// 		write(1, "OK", 2);
// 	return (0);
// }
