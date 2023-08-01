/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:27:41 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/08 13:22:36 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

void	ft_to_uppercase(char *c)
{
	*c -= 32;
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_lowercase(str[i]))
			ft_to_uppercase(str + i);
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[] = "hello!\n";
// 	ft_strupcase(str1);
// 	puts(str1);
// 	return (0);
// }
