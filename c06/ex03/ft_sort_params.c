/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:40:19 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/24 09:23:08 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_printstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_swap(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_sort_arguments(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc - 1)
	{
		j = 0;
		while (++j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(argv + j, argv + j + 1);
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_arguments(argc, argv);
	i = 0;
	while (++i < argc)
		ft_printstr(argv[i]);
	return (0);
}
