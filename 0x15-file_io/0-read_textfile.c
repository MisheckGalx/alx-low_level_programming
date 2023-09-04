#include "main.h"

/**
 * read_textfile - Reads text file & prints the STDOUT
 * @filename: Name file to be read
 * @letters: maximum number letters be read and print
 *
 * Return: Number of letters could read and print
 * if filename NULL return zero
 * if write fails return zero
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, length, i, result;
	char *buffer;

	/*check if the parameter is NULL*/
	if (filename == NULL)
		return (0);

	/*open the file in read only mode*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*allocate a buffer of size letters*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*read and add a null terminator*/
	read(fd, buffer, letters);
	buffer[letters] = '\0';

	for (i = 0; buffer[i] != '\0'; i++)
		length += 1;

	result = close(fd);
	if (result != 0)
		exit(-1);

	/*write contents of buffer to STDOUT*/
	result = write(STDOUT_FILENO, buffer, length);
	if (result != length)
		return (0);

	free(buffer);

	return (length);
}
