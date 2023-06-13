#include "main.h"

/**
  * read_textfile - reads a text file & prints it to the POSIX standard output
  * @filename: name of file
  * @letters: number of letters it should read and print
  * Return: Actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	rd = read(file, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(file);

	free(buf);

	return (wr);
}
