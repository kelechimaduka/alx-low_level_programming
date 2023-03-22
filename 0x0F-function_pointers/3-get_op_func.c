#include "3-calc.h"

/**
 * get_op_func - operators concerned
 *
 * @s: operator
 *
 * Return: Success
 */

int (*get_op_func(char *s))(int, int)
{
	op_t oprt[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a = 0;

	while (a < 10)
	{
		if (s[0] == oprt->op[a])
		{
			break;
		}
		a++;
	}

	return (oprt[a / 2].f);
}
