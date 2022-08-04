#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of elements
 * @size: size of an array
 * @action: pointer to a function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !f)
		return;

	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
