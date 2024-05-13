/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:03:56 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/19 15:41:53 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	rendue;

	rendue = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		rendue *= nb;
		nb--;
	}
	return (rendue);
}
/*
int	main(void)
{
	printf("fact(4) = %d\n", ft_iterative_factorial(4));
	printf("fact(0) = %d\n", ft_iterative_factorial(0));
	printf("fact(-54) = %d\n", ft_iterative_factorial(-54));
	printf("fact(1) = %d\n", ft_iterative_factorial(1));
	return 0;
}*/
