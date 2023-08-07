#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - WWWWWWWWWW
 * @filename: WWWWWWWWWWW
 * @text_content: WWWWWWW
 * Return: WWWWWWWWW
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0x600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		written = write(fd, text_content, strlen(text_content));
		close(fd);

		if (written == -1)
			return (-1);
	
		return (1);
	}

	close(fd);
	return (1);
}
