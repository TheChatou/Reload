/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoullou <fcoullou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:19:45 by fcoullou          #+#    #+#             */
/*   Updated: 2023/11/04 21:17:18 by fcoullou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_display_file(int f_desc)
{
	char	buffer;

	while (read(f_desc, &buffer, 1) != 0)
	{
		write(1, &buffer, 1);
	}
}

int	main(int argc, char **argv)
{
	int	f_desc;

	if (argc != 2)
	{
		if (argc < 2)
			ft_putstr(2, "File name missing.\n");
		if (argc > 2)
			ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	f_desc = open(argv[1], O_RDONLY);
	if (f_desc == -1)
	{
		ft_putstr(2, "Cannot read file.\n");
		return (1);
	}
	ft_display_file(f_desc);
	close(f_desc);
	return (0);
}
