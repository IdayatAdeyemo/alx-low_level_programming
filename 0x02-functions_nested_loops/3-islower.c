#include "main.h"

/**
 * _islower - is a fuction that check for lowercase character
 * @c: an input character
 *
 * decription: print o
 * alphabet in lowercase
 * return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
