#include "main.h"

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
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;

	if (!filename)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
	{
		perror("open");
		return (-1);
	}

	if (len > 0)
	{
		char *buf = malloc(len * sizeof(char));

		if (!buf)
		{
			perror("malloc");
			close(fd);
			return (-1);
		}

		memcpy(buf, text_content, len);
		res = write(fd, buf, len);
		free(buf);
	}
	else
	{
		res = 1;
	}

	if (res == -1)
	{
		perror("write");
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
