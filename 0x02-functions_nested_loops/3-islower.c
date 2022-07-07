#include "main.h"

/**
 * _islower - check Holberton
 *
 * @c: an input character
 * description: function print alphabet in lowercase
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
