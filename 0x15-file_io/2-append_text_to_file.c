#include "main.h"

/**
 * append_text_to_file - appends a file
 * @filename: name of file to be appended
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}
	close(fd);
	return (1);
}
