#include "main.h"

/**
 * main - entry
 *
 * @ac: arg count
 * @av: arg vec
 *
 * Return: Success
 */

int main(int ac, char *av[])
{
	int source, dest, readstatus, writestatus;
	mode_t per_t = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[BUFSIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	source = open(av[1], O_RDONLY);
	if (source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, per_t);
	if (dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	readstatus = 1;
	while (readstatus)
	{
		readstatus = read(source, buffer, BUFSIZE);
		if (readstatus == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]), exit(98);
		if (readstatus > 0)
		{
			writestatus = write(dest, buffer, readstatus);
			if (writestatus != readstatus || writestatus == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);
	if (close(dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
