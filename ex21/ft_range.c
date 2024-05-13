/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:13:46 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/22 15:13:47 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	index;

	index = 0;
	if (min >= max)
		return (NULL);
	tab = (int *) malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[index] = min;
		index++;
		min++;
	}
	return (tab);
}
/*
int	main(void)
{
	//int	*tab = ft_range(1, 10);
	//int *tab2 = ft_range(-4, 5);
	//int *tab3 = ft_range(5, 0);
	//int i;
	int j;
	for (j = 0; j < 9; j++)
		printf("tab[j] = %d\t", tab[j]);

	return (0);
}*/
