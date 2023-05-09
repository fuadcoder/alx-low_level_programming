#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - it read textfile print to the STDOUT.
 * @filename: the text file that is being read
 * @letters: num of the letters to be read
 * Return: w- the actual num of the bytes read and printed out
 * 0 if function fail or filename NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	clode(fd);
	return (w);
}
