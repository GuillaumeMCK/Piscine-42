/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 22:16:59 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/20 13:47:55 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	if (!a || !b)
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <unistd.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 42;
// 	b = 24;
// 	ft_swap(&a, &b);
// 	if (a == 24 && b == 42)
// 		write(1, "OK", 2);
// 	return (0);
// }
