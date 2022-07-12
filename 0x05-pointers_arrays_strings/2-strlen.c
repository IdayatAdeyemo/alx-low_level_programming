#include "main.h"

/**
 * _strlen - return string function
 * @s: pointer to the string
 *
 * Return: void
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
