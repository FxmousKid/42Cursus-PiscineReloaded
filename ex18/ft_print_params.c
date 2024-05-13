/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:14:30 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/21 17:14:31 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_args(char **argv)
{
	int	index_arg;
	int	index_in_arg;

	index_arg = 1;
	index_in_arg = 0;
	while (argv[index_arg])
	{
		while (argv[index_arg][index_in_arg])
		{
			write(1, &argv[index_arg][index_in_arg], 1);
			index_in_arg++;
		}
		write(1, "\n", 1);
		index_arg++;
		index_in_arg = 0;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	display_args(argv);
	return (0);
}
