#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- the Read text file will print to STDOUT.
 * @filename: the text file being read
 * @letters: this is the number of letters to be read
 * Return: w- when the actual number of bytes is read and printed
 * 0 -  when the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
