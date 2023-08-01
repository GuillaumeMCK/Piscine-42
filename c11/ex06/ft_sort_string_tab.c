/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:28:46 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/25 02:00:25 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (-1);
	i = 0;
	while (s1[i] && s2[i] && ((unsigned char)s1[i] == (unsigned char)s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	if (!tab)
		return ;
	i = -1;
	while (++i, tab[i] != 0)
	{
		j = -1;
		while (++j, tab[j] != 0)
		{
			if (ft_strcmp(tab[i], tab[j + 1]) > 0)
				ft_swap(tab + j, tab + j + 1);
		}
	}
}
