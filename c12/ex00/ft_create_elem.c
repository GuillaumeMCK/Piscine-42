/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 00:11:38 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/25 00:18:51 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*t;

	t = (t_list *)malloc(sizeof(t_list));
	if (t)
	{
		t->data = data;
		t->next = NULL;
	}
	return (t);
}
#include <stdio.h>
int	main(void)
{
	t_list	*list;
	char	*str;

	str = "Hello World!";
	list = ft_create_elem(str);
	return (0);
}