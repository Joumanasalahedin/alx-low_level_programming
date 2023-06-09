#include "main.h"

/**
  * create_file - creates a file
  * @filename: filename
  * @text_content: NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, result, text_len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len] != '\0'; text_len++)
			;

		result = write(fd, text_content, text_len);

		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
