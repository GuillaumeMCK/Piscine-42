/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 06:38:42 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/08 13:22:50 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_hexa(char c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);
}

void	ft_display_addr(unsigned long long addr)
{
	char	*base;
	char	hex[16];
	int		i;

	base = "0123456789abcdef";
	i = 0;
}

void	ft_display_hexa(unsigned char *str, unsigned int size)
{
	unsigned int	i;
	char			*base;
	char			hex[2];

	base = "0123456789abcdef";
	i = 0;
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned int	bytes_to_write;

	str = (unsigned char *)addr;
	i = 0;
	return (addr);
}

int	main(void)
{
	char	*str;
	char	*dumb1;
	char	*dumb2;

	str = "";
	dumb1 = "Bonjour les aminches\t\n\tc  est fou\
			\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	dumb2 = "Hello World!";
	ft_print_memory(str, 90);
	return (0);
}
