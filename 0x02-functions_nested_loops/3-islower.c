#include "main.h"

/**
 *_islower.c - is a fuction that check for lowercase character
 *
 * decription:return 1 if c is lowercase
 * return 0 if c is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
