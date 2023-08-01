/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:52:51 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/10 15:04:26 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;

// 	s1 = "Hello";
// 	s2 = "Hello";
// 	s3 = "Hello World";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	printf("%d\n", ft_strcmp(s1, s3));
// 	printf("%d\n", strcmp(s1, s2));
// 	printf("%d\n", strcmp(s1, s3));

// }