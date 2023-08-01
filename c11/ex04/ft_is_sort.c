/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:21:02 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/24 16:09:09 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	index;
	int	is_asc;
	int	is_desc;
	int	result;

	if (length <= 1)
		return (1);
	if (!tab || !f)
		return (1);
	is_asc = 1;
	is_desc = 1;
	index = 0;
	while (index < length - 1)
	{
		result = f(tab[index], tab[index + 1]);
		if (result > 0)
			is_asc = 0;
		if (result < 0)
			is_desc = 0;
		index++;
	}
	return (is_asc || is_desc);
}
