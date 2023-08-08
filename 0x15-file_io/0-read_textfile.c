#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*
	 * This function reads a text file and prints it to STDOUT.
	 *
	 * The `filename` parameter is the name of the text file to read.
	 * The `letters` parameter is the number of letters to read from the file.
	 *
	 * The function first opens the file in read-only mode.
	 *
	 * The function then allocates a buffer to store the text from the file.
	 *
	 * The function then reads `letters` bytes from the file into the buffer.
	 *
	 * The function then writes the text from the buffer to STDOUT.
	 *
	 * The function then frees the buffer.
	 *
	 * The function then closes the file.
	 *
	 * The function returns  number of bytes from the file and printed to STDOUT.
	 */

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
