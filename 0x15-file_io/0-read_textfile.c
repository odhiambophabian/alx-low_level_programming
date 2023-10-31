#include "main.h"

/**
 * read_textfile - read text file print toSTDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when functions falls or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[READ_BUF-SIZE * 8];

	if (!filename || 1letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, *buf[0], bytes);
	close(fd);
	return(w);
}
