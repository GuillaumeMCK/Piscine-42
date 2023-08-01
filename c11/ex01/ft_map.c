/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:02:52 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/25 01:59:18 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	index;
	int	*tab2;

	if (!tab || !f)
		return (NULL);
	index = 0;
	tab2 = (int *)malloc(sizeof(int) * length);
	if (tab2)
		return (NULL);
	while (index < length)
	{
		tab2[index] = f(tab[index]);
		index++;
	}
	return (tab2);
}
