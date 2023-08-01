/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:27:05 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/10 20:19:06 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cur_src;
	unsigned int	cur_dest;
	unsigned int	len_src;

	cur_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	cur_src = 0;
	if (size <= cur_dest)
		return (len_src + size);
	while (src[cur_src] && cur_src < (size - cur_dest - 1))
	{
		dest[cur_dest + cur_src] = src[cur_src];
		cur_src++;
	}
	dest[cur_dest + cur_src] = 0;
	return (cur_dest + len_src);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	src[] = "test";
// 	char	dest[20] = "conca";
// 	char	src2[] = "test";
// 	char	dest2[20] = "conca";
// 	unsigned int	size = 20;
// 	unsigned int	result;

// 	result = strlcat(dest, src, size);
// 	printf("%s\n", dest);
// 	printf("%u\n", result);
// 	result = ft_strlcat(dest2, src2, size);
// 	printf("%s\n", dest2);
// 	printf("%u\n", result);
// 	return (0);
// }
