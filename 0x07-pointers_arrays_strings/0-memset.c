#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s:memory space to be filled
 * @b:byte to be filled
 * @n:number of space to fill
 *
 * Return: a pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
