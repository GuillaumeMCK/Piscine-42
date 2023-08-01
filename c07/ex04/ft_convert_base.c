/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:46:43 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/24 15:02:21 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base, int *invalid);
int		ft_init_base(int *radix, char *base, int *invalid);

int	ft_size_and_sign(long *nbr, int radix, int *sign)
{
	int	size;
	int	tmp;

	tmp = *nbr;
	*sign = 1;
	if (*nbr == 0)
		return (1);
	size = 0;
	if (*nbr < 0)
	{
		*sign = -1;
		*nbr *= -1;
		size++;
	}
	while (tmp != 0)
	{
		tmp /= radix;
		size++;
	}
	return (size);
}

char	*ft_itoa_base(int nbr, char *base, int *invalid)
{
	int		radix;
	int		size;
	int		sign;
	char	*str;
	long	l_nbr;

	l_nbr = nbr;
	if (!ft_init_base(&radix, base, invalid))
		return (NULL);
	size = ft_size_and_sign(&l_nbr, radix, &sign);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	if (sign == -1)
		str[0] = '-';
	str[size] = 0;
	while (--size > 0 || (sign == 1 && size == 0))
	{
		str[size] = base[l_nbr % radix];
		l_nbr /= radix;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i_nbr;
	int		invalid;
	char	*output;

	invalid = 0;
	i_nbr = ft_atoi_base(nbr, base_from, &invalid);
	if (invalid)
		return (NULL);
	output = ft_itoa_base(i_nbr, base_to, &invalid);
	if (invalid || !output)
		return (NULL);
	return (output);
}

/*
** #include <stdio.h>
** 
** int	main(void)
** {
** 	printf("42:%s\n", ft_convert_base("--2a", "0123456789abcdef",
** 			"0123456789"));
** 	printf("-2a:%s\n", ft_convert_base("-42", "0123456789",
** 			"0123456789abcdef"));
** 	printf("-255:%s\n", ft_convert_base("-ff", "0123456789abcdef",
** 			"0123456789"));
** 	printf("5:%s\n", ft_convert_base("101", "01", "0123456789abcdef"));
** 	printf("0:%s\n", ft_convert_base("0", "01", "0123456789abcdef"));
** 	printf("101010:%s\n", ft_convert_base("42", "0123456789", "01"));
** 	printf("-101010:%s\n", ft_convert_base("-42", "0123456789", "01"));
** 	printf("2A:%s\n", ft_convert_base("101010", "01", "0123456789ABCDEF"));
** 	printf("440:%s\n", ft_convert_base("-+-+224 56", "0123456789", "0123456"));
** 	printf("61:%s\n", ft_convert_base(" 43", "0123456789", "0123456"));
** 	printf("-10101010 : %s\n", ft_convert_base("   \n -10101010", "01", "01"));
** 	printf("-2D : %s\n", ft_convert_base("\t\n\r\v\f--+++++-45", "0123456789",
** 			"0123456789ABCDEF"));
** 	printf("1111 : %s\n", ft_convert_base("15", "0123456789", "01"));
** 	printf("16 : %s\n", ft_convert_base("10000", "01", "0123456789"));
** 	printf("-1f : %s\n", ft_convert_base("-31", "0123456789",
** 			"0123456789abcdef"));
** 	printf("31 : %s\n", ft_convert_base("+1f", "0123456789abcdef",
** 			"0123456789"));
** 	printf("0 : %s\n", ft_convert_base("0", "0123456789", "0123456789abcdef"));
** 	printf("0 : %s\n", ft_convert_base("0.1234567", "0123456789",
** 			"0123456789"));
** 	printf("7fffffff : %s\n", ft_convert_base("2147483647", "0123456789",
** 			"0123456789abcdef"));
** 	printf("-2147483648 : %s\n", ft_convert_base("-80000000",
** 			"0123456789abcdef", "0123456789"));
** 	printf("o : %s\n", ft_convert_base("01", "0123456789", "poneyvif"));
** 	printf("(null) : %s\n", ft_convert_base("", "0123456789", "poney vif"));
** 	printf("-806y : %s\n", ft_convert_base("-25738", "0123456789",
** 			"1234567890ertyu"));
** }
*/
