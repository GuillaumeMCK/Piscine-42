/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:27:03 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/23 12:08:27 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*cpy;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * len + 1);
	if (cpy)
		return (NULL);
	i = -1;
	while (++i, src[i])
		cpy[i] = src[i];
	cpy[i] = 0;
	return (cpy);
}

int	ft_malloc_tab(char *str, t_stock_str *dest)
{
	dest->size = ft_strlen(str);
	dest->str = ft_strdup(str);
	if (dest->str == NULL)
		return (1);
	dest->copy = ft_strdup(str);
	if (dest->copy == NULL)
		return (1);
	return (0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*output;
	int			i;

	if (av == NULL)
		return (NULL);
	output = malloc(sizeof(t_stock_str) * (ac + 1));
	if (output == NULL)
		return (NULL);
	i = -1;
	while (++i, i < ac)
	{
		if (ft_malloc_tab(av[i], &output[i]))
		{
			while (i >= 0)
				free(output + i--);
			return (NULL);
		}
	}
	output[i].str = NULL;
	return (output);
}

/*
**  #include <stdio.h>
**
**  int	main(int argc, char *argv[])
**  {
**  	t_stock_str	*arr;
**
**  	arr = ft_strs_to_tab(argc, &(*argv));
**  	for (int i = 0; i < argc; i++)
**  	{
**  		printf("-----------------\n");
**  		printf("size: %d \n", arr[i].size);
**  		printf("str : %s \n", arr[i].str);
**  		printf("cpy : %s \n", arr[i].copy);
**  	}
**  	return (0);
**  }
*/