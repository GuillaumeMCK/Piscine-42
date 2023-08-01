/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:05:06 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/05 11:14:25 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!ft_is_printable(*str))
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
// 	str2 = "hello\n";
// 	if (ft_str_is_printable(str1))
// 		write(1, "OK 1\n", 5);
// 	if (!ft_str_is_printable(str2))
// 		write(1, "OK 2", 4);

// 	return (0);
// }