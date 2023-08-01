/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:47:33 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/25 01:57:49 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_hanlder(int a, int b, char *op)
{
	int	(*f[5])(int, int);

	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;

	if (*op == '+')
		return (f[0](a, b));
	else if (*op == '-')
		return (f[1](a, b));
	else if (*op == '*')
		return (f[2](a, b));
	else if (*op == '/')
		return (f[3](a, b));
	else if (*op == '%')
		return (f[4](a, b));
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*op;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = argv[2];
	if (b == 0 && (*op == '/' || *op == '%'))
	{
		if (*op == '/')
			ft_putstr("Stop : division by zero", 1);
		else
			ft_putstr("Stop : modulo by zero", 1);
	}
	else
		ft_putnbr(ft_hanlder(a, b, op));
	ft_putstr("\n", 1);
	return (0);
}
