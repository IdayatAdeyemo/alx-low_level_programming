#include "main.h"
/**
 * main - Entry point
 *
 * print_alphabet - print alphabet in lower case return 0 (success)
 *
 */

int main(void)
{
	char low;

	for ( low = 97; low <= 122; low++)
	{
		_putchar(low);
		_putchar('\n');
	}

	print_alphabet();
	
}
