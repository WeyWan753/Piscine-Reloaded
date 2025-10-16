/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:20:49 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/10/16 19:51:57 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1024

void	error(int argc, int fd)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		exit(1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		exit(1);
	}
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	char	buf[BUF_SIZE];
	int		fd;
	int		readbytes;
	int		i;

	fd = open(argv[1], O_RDONLY);
	error(argc, fd);
	readbytes = read(fd, buf, BUF_SIZE);
	while (readbytes > 0)
	{
		i = 0;
		while (i < readbytes)
		{
			write(1, &buf[i], 1);
			i++;
		}
		readbytes = read(fd, buf, BUF_SIZE);
	}
	close(fd);
}
