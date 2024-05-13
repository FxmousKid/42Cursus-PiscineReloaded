/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:27:00 by inazaria          #+#    #+#             */
/*   Updated: 2024/05/13 17:00:58 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_error(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	display(char *filename)
{
	int		file;
	char	character;
	int		read_status;

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		ft_error("Cannot read file.\n");
		return ;
	}
	read_status = read(file, &character, 1);
	if (read_status < 0)
	{
		ft_error("Cannot read file.\n");
		close(file);
		return ;
	}
	while (read_status > 0)
	{
		write(1, &character, 1);
		read_status = read(file, &character, 1);
	}
	close(file);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_error("File name missing.\n");
	else if (argc > 2)
		ft_error("Too many arguments.\n");
	else
		display(argv[1]);
	return (0);
}
