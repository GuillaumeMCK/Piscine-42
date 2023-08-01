/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:45:35 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/05 08:52:50 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(tab + i, tab + j);
			}
			j++;
		}
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	arr1[6];

// 	arr1[0] = 1;
// 	arr1[1] = 9;
// 	arr1[2] = 5;
// 	arr1[3] = 10;
// 	arr1[4] = -5;
// 	arr1[5] = -5;
// 	printf("%d, %d, %d, %d, %d, %d\n", arr1[0], arr1[1], arr1[2], arr1[3],
// 		arr1[4], arr1[5]);
// 	ft_sort_int_tab(arr1, 6);
// 	printf("%d, %d, %d, %d, %d, %d\n", arr1[0], arr1[1], arr1[2], arr1[3],
// 		arr1[4], arr1[5]);
// }
