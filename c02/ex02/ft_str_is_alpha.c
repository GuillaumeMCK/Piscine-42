/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:11:04 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/05 16:25:20 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!ft_is_alpha(*str))
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

// 	str1 = "Hello";
// 	str2 = "12Hello";
// 	if (ft_str_is_alpha(str1))
// 		write(1, "OK 1\n", 5);
// 	if (!ft_str_is_alpha(str2))
// 		write(1, "OK 2", 4);
// 	return (0);
// }
