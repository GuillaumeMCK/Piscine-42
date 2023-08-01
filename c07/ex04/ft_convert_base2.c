/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:18:24 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/24 08:12:25 by gmucwick         ###   ########.fr       */
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
		{
			if (c == '+' || c == '-')
				return (1);
			if ((c >= '\t' && c <= '\r') || c == ' ')
				return (1);
			if (c < ' ' || c > '~')
				return (1);
		}
	}
	return (0);
}

int	ft_init_base(int *radix, char *base, int *invalid)
{
	*invalid = 1;
	*radix = ft_strlen(base);
	if (*radix < 2 || !*base || ft_dupl_or_forb(base, *radix))
		return (0);
	*invalid = 0;
	return (1);
}

int	ft_atoi_base(char *str, char *base, int *invalid)
{
	int		value;
	long	res;
	int		sign;
	int		radix;

	if (!ft_init_base(&radix, base, invalid))
		return (0);
	sign = 1;
	res = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && *ft_idx_in_base(*str, base, &value) != -1)
	{
		res = (res * radix) + value;
		str++;
	}
	return (res * sign);
}
