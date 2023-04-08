#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 *
 * @filename: name of file
 * @text_content: content
 *
 * Return: success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int add, leng, status;

	if (filename == NULL)
		return (-1);
	add = open(filename, O_WRONLY | O_APPEND);
	if (add == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (leng = 0; text_content[leng]; leng++)
		;
	close(add);
	return (status == -1 ? -1 : 1);
}
