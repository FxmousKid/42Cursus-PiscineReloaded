/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:43:47 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/19 15:41:50 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main(void)
{
	printf("fact(4) = %d\n", ft_recursive_factorial(4));
	printf("fact(0) = %d\n", ft_recursive_factorial(0));
	printf("fact(1) = %d\n", ft_recursive_factorial(1));
	printf("fact(-45) = %d\n", ft_recursive_factorial(-45));
	return 0;
}*/
