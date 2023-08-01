/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:39:56 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/06 08:13:33 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!ft_is_uppercase(*str))
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

// 	str1 = "HELLO";
// 	str2 = "hello";
// 	if (ft_str_is_uppercase(str1))
// 		write(1, "OK 1\n", 5);
// 	if (!ft_str_is_uppercase(str2))
// 		write(1, "OK 2", 4);
// 	return (0);
// }
