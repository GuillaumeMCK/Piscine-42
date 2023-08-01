/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 09:41:20 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/04 22:43:41 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	arr1[5];

// 	arr1[0] = 0;
// 	arr1[1] = 2;
// 	arr1[2] = 4;
// 	arr1[3] = 8;
// 	arr1[4] = 10;
// 	printf("%d, %d, %d, %d, %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
// 	ft_rev_int_tab(arr1, 5);
// 	printf("%d, %d, %d, %d, %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);
// }
