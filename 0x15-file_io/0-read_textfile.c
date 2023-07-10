#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- text file print to STDOUT.
 * @filename: file to be read
 * @letters: number of letters to be printed and read
 * Return: return to 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buf;
	ssize_t w;
	ssize_t fd;
	ssize_t t;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	w = write(STDOUT_FILENO, buf, t);
	t = read(fd, buf, letters);

	free(buf);
	close(fd);
		return (w);

}
