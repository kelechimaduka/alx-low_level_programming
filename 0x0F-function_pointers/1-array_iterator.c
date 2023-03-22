#include "function_pointers.h"

/**
 * srray_iterator - iterates array
 *
 * @array: array involved
 * @size: size of array
 * @action: function pointer
 *
 * Return: Success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
