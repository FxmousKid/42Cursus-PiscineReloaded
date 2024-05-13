/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:16:10 by inazaria          #+#    #+#             */
/*   Updated: 2024/02/22 11:16:12 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_sort_param(int argc, char **argv)
{
	int		tr_pr;
	int		tr_snd;
	char	*swap;

	tr_pr = 1;
	while (tr_pr < argc)
	{
		tr_snd = tr_pr;
		while (tr_snd < argc)
		{
			if (ft_strcmp(argv[tr_pr], argv[tr_snd]) > 0)
			{
				swap = argv[tr_pr];
				argv[tr_pr] = argv[tr_snd];
				argv[tr_snd] = swap;
			}
			tr_snd++;
		}
		tr_pr++;
	}
}

int	main(int argc, char **argv)
{
	ft_sort_param(argc, argv);
	display_args(argv);
	return (0);
}
