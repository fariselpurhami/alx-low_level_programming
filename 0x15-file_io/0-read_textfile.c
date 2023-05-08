#include "main.h"

/**
 * read_textfile - LET'S WRITE A FUNCTION THAT READS A
 * TEXT FILE AND PRINT IT TO THE POSIX STANDARD OUTPUT.
 * @filename: ITS FN THAT READING THE NAME OF THE FILE.
 * @letters: ITS READING AND PRINTING NUMBER OF LETTERS.
 * Return: THE NUMBER OF LETT THAT READING ADN PRINTING.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_read, num_written;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}

	num_read = read(fd, buf, letters);
	if (num_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buf, num_read);
	if (num_written == -1 || num_written != num_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (num_written);
}
