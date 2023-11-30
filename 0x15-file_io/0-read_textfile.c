#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text File and prints it to POSIX stdout.
 * @filename: A pointer to the Name of the file.
 * @letters: The number of Letters the
 *           function Should read and print.
 *
 * Return: If the Function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t k, y, z;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	k = open(filename, O_RDONLY);
	y = read(k, buffer, letters);
	z = write(STDOUT_FILENO, buffer, y);

	if (k == -1 || y == -1 || z == -1 || z != y)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(k);

	return (z);

}
