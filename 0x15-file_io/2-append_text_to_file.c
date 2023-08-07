#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - WWWWWWWWWW
 * @filename: WWWWWWWWWWW
 * @text_content: WWWWWWW
 * Return: WWWWWWWWW
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	written = write(fd, text_content, (int)strlen(text_content));
	if (written == -1)
		return (-1);

	close(fd);
	return (1);
}
