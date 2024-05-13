/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:03:56 by inazaria          #+#    #+#             */
/*   Updated: 2024/05/13 16:31:08 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int	rendue;

	rendue = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		if (rendue > INT_MAX / nb)
			return (0);
		rendue *= nb;
		nb--;
	}
	return (rendue);
}
