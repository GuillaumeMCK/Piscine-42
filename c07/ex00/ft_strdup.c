/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:29:17 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/21 18:17:11 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str)
	{
		lenght++;
		str++;
	}
	return (lenght);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*cpy;

	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * len + 1);
	if (cpy == NULL)
		return (NULL);
	i = -1;
	while (++i, src[i])
		cpy[i] = src[i];
	cpy[i] = 0;
	return (cpy);
}

/*
** #include <stdio.h>
** #include <string.h>
**
** int	main(void)
** {
** 	char *src = "testing";
** 	char *cpy;
** 	printf("%s\n", src);
** 	cpy = ft_strdup(src);
** 	printf("%s\n", cpy);
** 	return (0);
** }
*/