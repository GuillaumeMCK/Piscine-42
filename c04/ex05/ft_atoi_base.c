/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:46:08 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/20 09:21:30 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

int	*ft_idx_in_base(char c, char *str, int *value)
{
	int	i;

	i = 0;
	while (str[i] && c != str[i])
		i++;
	if (c != str[i])
		*value = -1;
	else
		*value = i;
	return (value);
}

int	ft_dupl_or_forb(char *str, int len)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	while (str[++i] && i < len)
	{
		j = i + 1;
		c = str[i];
		while (str[j++])
			if (c == str[j] || c == ' ' || c == '+' || c == '-')
				return (1);
	}
	return (0);
}

int	ft_isvalid_base(int *radix, char *base)
{
	*radix = ft_strlen(base);
	if (*radix < 2 || !*base || ft_dupl_or_forb(base, *radix))
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	radix;
	int	value;

	if (!ft_isvalid_base(&radix, base))
		return (0);
	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\t')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *ft_idx_in_base(*str, base, &value) != -1)
	{
		res = (res * radix) + value;
		str++;
	}
	return (res * sign);
}

// #include <stdio.h>
// #include <unistd.h>

// int	main(void)
// {
// 	printf("%d\n",ft_atoi_base("101", "01"));
// 	printf("%d\n",ft_atoi_base("   --+-ffsdv", "0123456789abcdef"));
// 	printf("%d\n",ft_atoi_base("  +-+----sdv", "0123456789abcde "));
// 	return (0);
// }