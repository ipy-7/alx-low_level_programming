#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - WWWWWWWWWW
 * @filename: WWWWWWWWWWW
 * @letters: WWWWWWW
 * Return: WWWWWWWWW
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret;
	char *buf;
	int fd, written;

	if (!filename)
		return (0);

	buf = malloc((int)letters + 1);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ret = read(fd, buf, letters);
	if (ret == -1)
		return (0);

	buf[ret] = '\0';

	written = write(STDOUT_FILENO, buf, ret);

	close(fd);
	free(buf);
	return (written == (int)ret ? ret : 0);
}
