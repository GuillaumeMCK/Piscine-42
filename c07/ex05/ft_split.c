/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:07:05 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/24 19:32:40 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_in_chst(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	word_count;
	int	in_word;
	int	i;

	word_count = 0;
	in_word = 0;
	i = -1;
	while (++i, str[i])
	{
		if (!ft_in_chst(str[i], charset))
		{
			if (!in_word)
			{
				word_count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
	}
	return (word_count);
}

char	*ft_copy_substring(int start, int end, char *str)
{
	int		length;
	char	*substring;
	int		i;

	length = end - start + 1;
	substring = malloc(sizeof(char) * (length + 1));
	if (!substring)
		return (NULL);
	i = -1;
	while (++i, i < length)
		substring[i] = str[start + i];
	substring[length] = '\0';
	return (substring);
}

/*
** char	**ft_free_copy(int word_count, char **arr)
** {
** 	if (!arr)
** 		return (NULL);
** 	while (--word_count, arr[word_count] != NULL)
** 		free(arr[word_count]);
** 	return (NULL);
** }
*/

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		idx[3];

	result = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (result == NULL)
		return (NULL);
	idx[0] = -1;
	idx[1] = 0;
	idx[2] = 0;
	while (++idx[0], str[idx[0]])
	{
		if (!ft_in_chst(str[idx[0]], charset) && (ft_in_chst(str[idx[0] + 1],
					charset) || str[idx[0] + 1] == '\0'))
		{
			result[idx[2]] = ft_copy_substring(idx[1], idx[0], str);
			if (result == NULL)
				return (NULL);
			idx[2]++;
		}
		else if (ft_in_chst(str[idx[0]], charset))
			idx[1] = idx[0] + 1;
	}
	result[idx[2]] = NULL;
	return (result);
}

/*
** 
**  #include <stdio.h>
** 
**  int	main(void)
**  {
**  	char	**arr;
** 
**  	// arr = ft_split("Hello World!", " ,");
**  	// arr = ft_split(",,Hello World!,,", " ,");
**  	arr = ft_split("hello,g,,,world", " ,");
**  	// arr = ft_split("hello", "");
**  	for (int i = 0; arr[i]; i++)
**  		printf("%s\n", arr[i]);
**  	printf("----------\n");
**  	arr = ft_split("qqqqqqwwwwwwwwweeeeee", "qw");
**  	for (int i = 0; arr[i]; i++)
**  		printf("%s\n", arr[i]);
**  	return (0);
**  }
*/