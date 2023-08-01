/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:27:41 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/08 13:22:39 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upcase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

void	ft_to_lowcase(char *c)
{
	*c += 32;
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_upcase(str[i]))
			ft_to_lowcase(str + i);
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[] = "HELLO!\n";
// 	ft_strlowcase(str1);
// 	puts(str1);
// 	return (0);
// }
