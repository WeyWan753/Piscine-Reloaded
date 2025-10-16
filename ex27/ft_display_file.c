/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:20:49 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/10/16 19:27:23 by wabin-wa         ###   ########.fr       */
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
		write(1, "File name missing.", 18);
		exit(0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.", 19);
		exit(0);
	}
	if (fd == -1)
	{
		write(1, "Cannot read file.", 17);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	char	buf[BUF_SIZE];
	int		fd;
	int		readbytes;
	int		i;

	buf[BUF_SIZE];
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
}
