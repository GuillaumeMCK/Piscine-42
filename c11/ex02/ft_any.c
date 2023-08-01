/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:16:22 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/25 01:09:12 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	int	index;

	if (!tab || !f)
		return (0);
	index = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]) != 0)
			return (1);
		index++;
	}
	return (0);
}
