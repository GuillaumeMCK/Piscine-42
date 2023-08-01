/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:59:06 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/10 15:16:33 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*src;
// 	char	dest[5];

// 	src = "Hello";
// 	ft_strcpy(dest, src);
// 	if (dest[0] == 'H' &&
// 		dest[1] == 'e' &&
// 		dest[2] == 'l' &&
// 		dest[3] == 'l' &&
// 		dest[4] == 'o')
// 		write(1, "OK", 2);
// 	return (0);
// }