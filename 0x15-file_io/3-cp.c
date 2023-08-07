#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * handle_error - WWWWWWWW
 * @fd_from: WWWWWWW
 * @fd_to: WWWWWWW
 * @av: WWWWW
 * Return: WWWWWW
 */
void handle_error(int fd_from, int fd_to, char **av)
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n", av[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * handle_close - WWWWWWWW
 * @fd_from: WWWWW
 * @fd_to: WWWWWW
 * Return: WWWWWWWW
 */
void handle_close(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - WWWWWWWWWW
 * @ac: WWWWWWWWWWW
 * @av: WWWWWWW
 * Return: WWWWWWWWW
 */
int main(int ac, char **av)
{
	char *file_from, *file_to, buffer[1024];
	int fd_from, fd_to, r_val, wr_val;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	handle_error(fd_from, fd_to, av);

	r_val = 1;
	while (r_val != 0)
	{
		r_val = read(fd_from, buffer, 1024);

		if (r_val == -1)
			handle_error(-1, fd_to, av);

		wr_val = write(fd_to, buffer, r_val);

		if (wr_val == -1)
			handle_error(fd_from, -1, av);
	}
	handle_close(fd_from, fd_to);
	return (0);
}
