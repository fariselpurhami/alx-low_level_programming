#include "main.h"

#define BUFSIZE 1024
#define MAX_FILENAME_LENGHT 256
#define MAX_TEXT_CONTENT_LENGHT 1024

int main(int argc, char *argv[]);

/**
 * main - LET'S COPY THE CONTENT OF FILE TO ANOTHER FILE.
 * @argc: IT'S ARGUEMNTS NUMBERS THAT PASSES THE PROGRAM.
 * @argv: IT'S POINTERS OF AN ARRAY [] TO THE ARGUEMENTS.
 * Return: ALWAYS 1 SUCCESS -0, OTHERWISE IF WILL ERRORS.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		r = read(fd_from, buf, BUFSIZE);
		if (r == -1)
		{
			dprintf(2, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}

		w = write(fd_to, buf, r);
		if (w == -1)
		{
			dprintf(2, "Error: can't write to file %s\n", argv[2]);
			exit(99);
		}
	}
	while (r == BUFSIZE)
		;

	if (close(fd_from) == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
