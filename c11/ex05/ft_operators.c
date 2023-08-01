/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 08:45:44 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/24 08:46:06 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_add(int a, int b)
{
	return (a + b);
}

int	ft_sub(int a, int b)
{
	return (a - b);
}

int	ft_mul(int a, int b)
{
	return (a * b);
}

int	ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int	ft_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
