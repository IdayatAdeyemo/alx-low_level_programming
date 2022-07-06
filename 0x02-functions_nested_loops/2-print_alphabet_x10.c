#include "main.h"

/**
 * main - Entry point
 *
 *void print_alphabet_x10(void)
 *
 * description:function to print alphabet 10x in lower case
 *
 * Return 10x a-z
 */

void print_alphabet_x10(void)
{
	int a, b;

	a = 0;

	while (a <= 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
	}
	_putchar('\n');
}
