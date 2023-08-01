/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:39:36 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/25 01:34:44 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	if (!tab || !cmp)
		return ;
	i = -1;
	while (++i, tab[i] != 0)
	{
		j = -1;
		while (++j, tab[j] != 0)
		{
			if (cmp(tab[i], tab[j + 1]) > 0)
				ft_swap(tab + j, tab + j + 1);
		}
	}
}
