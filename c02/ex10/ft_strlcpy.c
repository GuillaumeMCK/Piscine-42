/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 08:43:51 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/08 09:50:08 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	i;

	src_len = ft_len(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*src = "qwerty";
// 	char	dest[10];
// 	int		size;
//
// 	size = 10;
// 	printf("%d\n", ft_strlcpy(dest, src, size));
// 	printf("%s\n", dest);
// 	printf("%lu\n", strlcpy(dest, src, size));
// 	printf("%s\n", dest);
// 	return (0);
// }