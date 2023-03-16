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
	if (args != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
