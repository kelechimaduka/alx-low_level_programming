#include "main.h"

/**
 * create_file - creates file
 *
 * @filename: name of file
 * @text_content: content
 *
 * Return: success
 */

int create_file(const char *filename, char *text_content)
{
	int new, leng, status;

	if (filename == NULL)
		return (-1);
	new = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new);
		return (1);
	}
	for (leng = 0; text_content[leng]; leng++)
		;
	status = write(new, text_content, leng);
	if (close(new) == -1)
		return (-1);
	return (status == -1 ? -1 : 1);
}
