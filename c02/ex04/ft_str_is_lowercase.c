/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:39:56 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/06 15:23:46 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!ft_is_lowercase(*str))
			return (0);
		str++;
	}
	return (1);
}

// #include <unistd.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "hello";
// 	str2 = "HELLO";
// 	if (ft_str_is_lowercase(str1))
// 		write(1, "OK 1\n", 5);
// 	if (!ft_str_is_lowercase(str2))
// 		write(1, "OK 2", 4);
// 	return (0);
// }
