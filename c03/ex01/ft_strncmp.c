/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:23:36 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/10 20:15:05 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	char *s3;

// 	s1 = "Hello";
// 	s2 = "";
// 	s3 = "Hellz";
// 	printf("%d\n", ft_strncmp(s1, s2, 8));
// 	printf("%d\n", strncmp(s1, s2, 8));
// 	printf("%d\n", ft_strncmp(s1, s3, 3));
// 	printf("%d\n", strncmp(s1, s3, 3));
// 	printf("%d\n", ft_strncmp(s3, s1, 4));
// 	printf("%d\n", strncmp(s3, s1, 4));
// }