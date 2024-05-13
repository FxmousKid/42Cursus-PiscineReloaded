/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:44:31 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/22 14:44:34 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

char	*ft_strdup(char *src)
{
	int		len_src;
	char	*dest;
	int		index;

	index = 0;
	len_src = ft_strlen(src);
	dest = (char *) malloc(sizeof(char) * len_src + 1);
	if (dest == NULL)
		return (0);
	while (src && index < len_src)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	int iter = 0;
	char *s;

	char dup_list[4][20] = {"duplicate me !", "dont duplicate me!", "", "bruh"};
	for (iter = 0; iter < 4; iter++)
	{
		printf("my func  : %s<- of size %lu\n", ft_strdup(dup_list[iter]), \
		sizeof(ft_strdup(dup_list[iter])));
		s = strdup(dup_list[iter]);
		printf("real fun : %s<- of size %lu\n\n", s, sizeof(s));
	}
	return (0);
}*/
