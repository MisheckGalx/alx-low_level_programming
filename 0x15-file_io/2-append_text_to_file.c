#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Append text at end of file
 * @filename: Name file containing string to be appended
 * @text_content: Pointer to string want to append
 * Return: One on success | -1 on failure
 * if filename is NULL return -1 | if text_content NULL don't add anything
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	len = strlen(text_content);

	res = write(fd, text_content, len);
	if (res == -1)
		return (-1);

	res = close(fd);
	if (res == -1)
		return (-1);

	return (1);
}
