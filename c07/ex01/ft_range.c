/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:28:02 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/21 18:17:31 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_compute_size(int min, int max)
{
	int	count;

	count = 0;
	while (min < max)
	{
		count++;
		min++;
	}
	return (count);
}

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = -1;
	while (++i, i < size)
	{
		range[i] = min;
		min++;
	}
	return (range);
}

/*
** #include <stdio.h>
** int	main(void)
** {
** 	int	*range;
** 	int	i;
** 	range = ft_range(0, 10);
** 	i = -1;
** 	while (++i < 10)
** 		printf("%d\n", range[i]);
** 	return (0);
** }
*/