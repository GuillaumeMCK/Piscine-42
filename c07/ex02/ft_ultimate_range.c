/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:33:44 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/21 18:18:33 by gmucwick         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = ft_compute_size(min, max);
	*range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (-1);
	i = -1;
	while (++i, i < size)
	{
		(*range)[i] = min;
		min++;
	}
	return (size);
}

/*
** #include <stdio.h>
** int	main(void)
** {
** 	int	*range;
** 	int	size;
** 	int	cur;
** 	size = ft_ultimate_range(&range, -10, 10);
** 	cur = -1;
** 	while (++cur < size)
** 		printf("%d : %d\n", cur, range[cur]);
** 	free(range);
** }
*/