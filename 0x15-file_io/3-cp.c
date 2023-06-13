#include "main.h"

/**
  * file_error - print error message
  * @file_from: file_from
  * @file_to: file_to
  * @argv: arguments vector
  */

void file_error(int file_from, int file_to, char *argv[])
{
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
  * main - copies the content of a file to another file
  * @argc: number of arguments
  * @argv: arguments vector
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, nrd, nwr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);

	while ((nrd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		nwr = write(fd_to, buffer, nrd);
		if (nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	if (nrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close(fd_from);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	close(fd_to);
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	} return (0);
}
