#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - print alphabet in lower case
 *
 */

void print_alphabet(void)
{
	char low;

	for ( low = 97; low <= 122; low++)
	{
		_putchar(low);
	}
	_putchar('\n');

	return (0);
}
