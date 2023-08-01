/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:52:15 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/20 18:17:23 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	ch;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ch = (nb % 10) + '0';
	write(1, &ch, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (++i, par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
	}
}

/*
** #include <stdio.h>
** 
** struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
** int	main(int argc, char *argv[])
** {
** 	t_stock_str	*arr;
** 
** 	arr = ft_strs_to_tab(argc, &(*argv));
** 	ft_show_tab(arr);
** 	return (0);
** }
*/
