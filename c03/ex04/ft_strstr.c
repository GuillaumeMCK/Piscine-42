/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:07:44 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/16 11:39:57 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *src, char *to_find)
{
	int	cur_src;
	int	cur_tf;

	if (!src || !to_find)
		return (0);
	if (*to_find == 0)
		return (src);
	cur_src = -1;
	while (src[++cur_src])
	{
		cur_tf = 0;
		while (to_find[cur_tf] && src[cur_tf + cur_src] == to_find[cur_tf])
			cur_tf++;
		if (to_find[cur_tf] == 0)
			return (src + cur_src);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*src = "aaaraaaabbb";
// 	char	*to_find = "aaaa";
// 	char	*result;

// 	result = ft_strstr(src, to_find);
// 	printf("%s\n", result);
// 	result = strstr(src, to_find);
// 	printf("%s\n", result);
// 	return (0);
// }
