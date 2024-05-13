/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:23:21 by inazaria          #+#    #+#             */
/*   Updated: 2024/05/13 15:39:07 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	idx;
	int	count;

	idx = 0;
	count = 0;
	while (tab[idx])
	{
		if (f(tab[idx]) == 1)
			count++;
		idx++;
	}
	return (count);
}
