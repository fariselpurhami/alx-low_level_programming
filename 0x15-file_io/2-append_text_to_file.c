#include "main.h"

#define MAX_FILENAME_LENGHT 256
#define MAX_TEXT_CONTENT_LENGHT 1024

int append_text_to_file(const char *filename, char *text_content);

/**
 * append_text_to_file - LET'S WRITES A FUNCTIONS
 * THAT WILL APPENDS TEXT AT THE END OF THE FILES.
 * @filename: IT'S CREATING THE NAME OF THE FILES.
 * @text_content: IT'S TEXT_CONTENT THAT ADD NULL.
 * TERMNATED OF THE STRING AT THE END OF THE FILE.
 * Return: ALWAYS (1) ON SUCCESS, -1 ON A FAILURE.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (!text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	while (len > 0)
	{
		if (len > 1024)
		{
			res = write(fd, text_content, 1024);
		}
		else
		{
			res = write(fd, text_content, len);
		}

		if (res == -1)
		{
			close(fd);
			return (-1);
		}

		len -= res;
		text_content += res;
	}

	close(fd);
	return (1);
}
