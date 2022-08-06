#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: array of given elements
 * @size: size of array element
 * @cmp: pointer to a fuction
 *
 * Return:nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		cmp(array[i]);
	return (i);
}
