#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - print alphabet in lower case return 0 (success)
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

	return (void);
}
