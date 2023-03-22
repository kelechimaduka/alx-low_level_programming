#include "3-calc.h"

/**
 * main - main code
 *
 * @argc: count
 * @argv: vector
 *
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int i, j;
	int (*operate)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operate = get_op_func(argv[2]);

	if (operate == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", operate(i, j));
	return (0);
}
