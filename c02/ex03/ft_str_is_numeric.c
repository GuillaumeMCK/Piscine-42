/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:39:56 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/08 13:22:25 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!ft_is_numeric(*str))
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

// 	str1 = "123";
// 	str2 = "12Hello";
// 	if (ft_str_is_numeric(str1))
// 		write(1, "OK 1\n", 5);
// 	if (!ft_str_is_numeric(str2))
// 		write(1, "OK 2", 4);
// 	return (0);
// }
