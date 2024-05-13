/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:02:36 by inazaria          #+#    #+#             */
/*   Updated: 2024/05/13 15:58:45 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
/*
int	main(void)
{
	char *s = "Hello World !";
	ft_putstr(s);
	return 0;
}*/
