/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:00:22 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/11 06:45:03 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb / 10)
		ft_putnbr(nb / 10);
	c = ('0' + nb % 10);
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr(-25);
// 	write(1, "\n", 1);

// 	ft_putnbr(1234);
// 	write(1, "\n", 1);
// 	ft_putnbr(12345);
// 	write(1, "\n", 1);
// 	ft_putnbr(-12345);
// 	write(1, "\n", 1);
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648);
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483648);
// }
