#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 *void print_alphabet_x10(void)
 *
 * description:function to print alphabet 10x in lower case
 *
 * Return 10x a-z
 */

void print_alphabet_x10(void)
{
	int mi, bi;

	mi = 0;

	while (mi < 10)
	{
		for (bi = 'a'; bi <= 'z'; bi++)
		{
			_putchar(bi);
		}
		mi++;
	_putchar('\n');
	}
}
