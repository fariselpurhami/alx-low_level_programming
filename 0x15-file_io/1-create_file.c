#include "main.h"

#define FILE_PERMS (S_IRUSR | S_IWUSR)
#define MAX_FILENAME_LENGHT 256
#define MAX_TEXT_CONTENT_LENGHT 1024

int create_file(const char *filename, char *text_content);

/**
 * create_file - IT'S FUNCTION THAT CREAT A FILE.
 * @filename: IT'S CREATING THE NAME OF THE FILE.
 * @text_content: IT'S WRITING THE CONTENTS FILE.
 * Return: ALWAYS 1 ON SUCCESS,ALW -1 ON FAILURE.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res;
	size_t len = 0;

	if (!filename)
	{
		return (-1);
	}

	if (text_content)
	{
		len = strlen(text_content);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}

	if (len > 0)
	{
		res = write(fd, text_content, len);
	}

	if (res == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
