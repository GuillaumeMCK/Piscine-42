/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:18:21 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/10 14:31:49 by gmucwick         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*dest_origin;
	unsigned int	cur_src;

	dest_origin = dest;
	dest += ft_strlen(dest);
	cur_src = 0;
	while (src[cur_src] && cur_src < nb)
	{
		*dest = src[cur_src];
		dest++;
		cur_src++;
	}
	*dest = 0;
	return (dest_origin);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*src = "qwerty";
// 	char	dest[30] = "abc  ";
// 	int		size;

// 	size = 3;
// 	// printf("%s\n", strncat(dest, src, size));
// 	// printf("%s\n", ft_strncat(dest, src, size));
// 	// printf("%s\n", ft_strncat(dest, src, size));
// 	printf("%s\n", strncat(dest, src, size));
// 	return (0);
// }
