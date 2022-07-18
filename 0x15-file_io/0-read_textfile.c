#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it read and print or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t length;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	length = read(fd, buff, letters);
	close(fd);
	if (length < 0)
	{
		free(buff);
		return (0);
	}
	length = write(STDOUT_FILENO, buff, length);
	if (length < 0)
	{
		free(buff);
		return (0);
	}
	return (length);
}
