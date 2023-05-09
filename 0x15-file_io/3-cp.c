#include "main.h"

#define BUFFER_SIZE 1024
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
	int file_from, file_to, read_count, write_count = 0;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_count = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(file_to, buffer, read_count);
	}

	if (write_count != read_count)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
