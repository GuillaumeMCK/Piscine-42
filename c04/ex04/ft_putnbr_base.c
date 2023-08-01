/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:53:22 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/11 12:28:07 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	ft_isforbidden(char c)
{
	return (c == '+' || c == '-' || c == ' ' || c == '\t');
}

int	ft_has_restricted_chars(char *str, int len)
{
	int	i;
	int	j;

	i = -1;
	while (str[++i] && i < len)
	{
		if (ft_isforbidden(str[i]))
			return (1);
		j = i;
		while (str[++j])
			if (str[i] == str[j])
				return (1);
	}
	return (0);
}

void	ft_print_nbr(long nb, int radix, char *base)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb / radix)
		ft_print_nbr(nb / radix, radix, base);
	write(1, &base[nb % radix], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	if (!base || !*base)
		return ;
	radix = ft_strlen(base);
	if (radix < 2 || !*base || ft_has_restricted_chars(base, radix))
		return ;
	ft_print_nbr(nbr, radix, base);
}

// int	main(void)
// {
// 	ft_putnbr_base(255, "0123456789abcdef");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-255, "0123456789abcdef");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-5, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(5, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(1410065408, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-1410065408, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(8, "poneyvif");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(10, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-2147483648, "01");
// 	write(1, "\n------\n", 8);
// 	ft_putnbr_base(10, "0111100");
// 	ft_putnbr_base(10, "0");
// 	ft_putnbr_base(10, "0123456789+");
// 	ft_putnbr_base(123, "abccde");
// 	return (0);
// }