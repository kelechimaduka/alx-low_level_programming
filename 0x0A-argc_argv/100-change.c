#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i, j = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);

	while (i > 0)
	{
		if (i >= 25)
		{
			i -= 25;
		}
		else if (i >= 10)
		{
			i -= 10;
		}
		else if (i >= 5)
		{
			i -= 5;
		}
		else if (i >= 2)
		{
			i -= 2;
		}
		else if (i >= 1)
		{
			i -= 1;
		}
		j += 1;
	}
	printf("%d\n", j);
	return (0);
}
