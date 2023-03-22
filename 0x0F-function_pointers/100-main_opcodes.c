#include <stdio.h>
#include <stdlib.h>

/**
 * main - maincode
 *
 * @argc: count
 * @argv: vector
 *
 * Return: Success
 */

int main(int argc, char *argv[])
{
	char *hih = (char *) main;
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02x", hih[i] & 0xFF);
		if (i != num - 1)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
