/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:55:35 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/21 18:47:12 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (*str)
	{
		lenght++;
		str++;
	}
	return (lenght);
}

int	ft_total_len(int size, int sep_len, char **strs)
{
	int	i;
	int	len;

	len = 0;
	if (sep_len != 0)
		len = sep_len * (size - 1);
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cur_src;
	unsigned int	cur_dest;
	unsigned int	len_src;

	cur_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	cur_src = 0;
	if (size <= cur_dest)
		return (len_src + size);
	while (src[cur_src] && cur_src < (size - cur_dest - 1))
	{
		dest[cur_dest + cur_src] = src[cur_src];
		cur_src++;
	}
	dest[cur_dest + cur_src] = 0;
	return (cur_dest + len_src);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		str_len;
	int		i;

	if (strs == NULL || size <= 0)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str_len = ft_total_len(size, ft_strlen(sep), strs) + 1;
	str = malloc(sizeof(char) * str_len);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	i = -1;
	while (++i, i < size)
	{
		ft_strlcat(str, strs[i], str_len);
		if (i < size - 1)
			ft_strlcat(str, sep, str_len);
	}
	str[str_len] = 0;
	return (str);
}

/*
**   #include <stdio.h>
** 
**   int	main(void)
**   {
**   	char *arr[] = {"heyy", "do", "you", "have", "tomato?"};
**   	char *sep = ", ";
**   	printf("%s\n", ft_strjoin(5, arr, sep));
**   	char *arr2[] = {};
**   	printf("%s\n", ft_strjoin(0, arr2, sep));
**   	char *arr3[] = {"heyy"};
**   	printf("%s\n", ft_strjoin(1, arr3, sep));
**   	char *arr4[] = {"heyy", "you"};
**   	printf("%s\n", ft_strjoin(2, arr4, sep));
**   	char *arr5[] = {"john", "doe"};
**   	printf("%s\n", ft_strjoin(2, arr5, ""));
**   	printf("%s\n", ft_strjoin(0, NULL, ";"));
**   	char *arr6[] = {"", "Hello", "", "world"};
**   	printf("%s\n", ft_strjoin(4, arr6, "?"));
**   	char *arr7[] = {"Hello", "world", "!"};
**   	printf("%s\n", ft_strjoin(3, arr7, ", "));
**   	return (0);
**   }
*/