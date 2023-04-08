#include "main.h"

/**
 * read_textfile - reads a text and prints to POSIX stdout
 *
 * @filename: name of file
 * @letters: letters
 *
 * Return: Success
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_nom, all, status;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	file_nom = open(filename, O_RDONLY);
	if (file_nom == -1)
		return (0);
	all = 0;
	status = 1;
	while (letters > BUFSIZE && status != 0)
	{
		status = read(file_nom, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, status);
		all += status;
		letters -= BUFSIZE;
	}
	status = read(file_nom, buffer, letters);
	write(STDOUT_FILENO, buffer, status);
	all += atatus;
	close(file_nom);
	return (all);
}
