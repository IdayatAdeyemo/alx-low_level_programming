#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: an input character
 *
 * 
 * return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
