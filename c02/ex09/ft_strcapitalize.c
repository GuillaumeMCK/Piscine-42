/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:13:41 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/06 08:39:39 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha_numeric(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 48
			&& c <= 57));
}

void	ft_to_lowcase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

void	ft_to_upcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int				i;
	unsigned int	on_word;

	i = -1;
	on_word = 0;
	while (str[++i])
	{
		if (ft_is_alpha_numeric(str[i]))
		{
			if (!on_word)
			{
				ft_to_upcase(str + i);
				on_word = 1;
			}
			else
				ft_to_lowcase(str + i);
		}
		else
			on_word = 0;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[] = "salut,
//			comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	ft_strcapitalize(str1);
// 	puts(str1);
// 	return (0);
// }
