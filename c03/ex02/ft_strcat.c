/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:31:32 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/10 14:31:09 by gmucwick         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	char			*dest_origin;
	unsigned int	cur_src;

	dest_origin = dest;
	dest += ft_strlen(dest);
	cur_src = 0;
	while (src[cur_src])
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
// 	char	dest[10] = "abc";

// 	printf("%s\n", strcat(dest, src));
// 	// printf("%s\n", ft_strcat(dest, src));
// 	return (0);
// }
