/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:12:56 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 16:27:29 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	is_prft(int nb)
{
	int	counter;

	counter = 1;
	while (counter < 46341)
	{
		if (counter * counter == nb)
			return (counter);
		counter++;
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	if (nb == 1)
		return (1);
	if (nb <= 0 || is_prft(nb) == 0)
		return (0);
	return (is_prft(nb));
}
/*
int main(void)
{
	printf("sqrt(2) = %d\n", ft_sqrt(2));
	printf("sqrt(16) = %d\n", ft_sqrt(16));
	printf("sqrt(2147483647) = %d\n", ft_sqrt(2147483647));
	printf("sqrt(0) = %d\n", ft_sqrt(0));
	printf("sqrt(-12) = %d\n", ft_sqrt(-12));
	printf("sqrt(1) = %d\n", ft_sqrt(1));
	printf("sqrt(3) = %d\n", ft_sqrt(3));
	printf("sqrt(5) = %d\n", ft_sqrt(5));
	return 0;
}*/