/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmucwick <gmucwick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 22:02:22 by gmucwick          #+#    #+#             */
/*   Updated: 2023/08/07 12:13:30 by gmucwick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	if (!*nbr || !**nbr || !***nbr || !****nbr || !*****nbr || !******nbr
		|| !*******nbr || !********nbr || !*********nbr)
		return ;
	*********nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int a;
	int *nbr1 = &a;
	int **nbr2 = &nbr1;
	int ***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	int ******nbr6 = &nbr5;
	int *******nbr7 = &nbr6;
	int ********nbr8 = &nbr7;
	int *********nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);

	if (a == 42)
		printf("OK\n");
	return (0);
}